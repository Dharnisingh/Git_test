// condition_variable example
#include <iostream>           // std::cout
#include <thread>             // std::thread
#include <mutex>              // std::mutex, std::unique_lock
#include <condition_variable> // std::condition_variable

using namespace std;

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void print_id (int id) {
  std::unique_lock<std::mutex> lck(mtx);
  // Start waiting for the Condition Variable to get signaled
  // Wait() will internally release the lock and make the thread to block
  // As soon as condition variable get signaled, resume the thread and
  // again acquire the lock. Then check if condition is met or not
  // If condition is met then continue else again go in wait.
  while (!ready) cv.wait(lck);
  {
	  cout << "Waiting for condition variable to be true\n";
	  this_thread::sleep_for(chrono::milliseconds(100));
  }
  std::cout << "thread " << id << '\n';
}

void go() {
  std::unique_lock<std::mutex> lck(mtx);
  ready = true;
  cv.notify_one();
}

int main ()
{
  std::thread threads[10];
  // spawn 10 threads:
  for (int i=0; i<10; ++i)
    threads[i] = std::thread(print_id,i);

  std::cout << "10 threads ready to race...\n";
  go();                       // go!

  for (auto& th : threads) th.join();

  return 0;
}
