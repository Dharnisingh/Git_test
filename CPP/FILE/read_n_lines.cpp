/** Thi program will print last N lines of a file
 */

#include <iostream>
#include <queue>
#include <fstream>

using namespace std;
void printLastNLines(const std::string& fname, int n);

int main()
{
    std::string fname = "my_file.txt";
    int n=5;
    printLastNLines(fname, n);
    
    return 0;
}

void printLastNLines(const std::string& fname, int n)
{
    ifstream infile(fname.c_str());
    if (!infile.is_open())
    {
        cout<<"File opening error."<<endl;
        return;
    }
    std::queue<std::string> lines;
    std::string line;

    //Read n lines into the queue till end of file is reached
    while (getline(infile,line))
    {
        if (lines.size() >= n)
        {
            lines.pop();
        }
        lines.push(line);
    }
    infile.close();

    // Display the contents of the queue
    while(!lines.empty())
    {
        cout<<"line = "<<lines.front()<<endl;
        lines.pop();
    }
}
