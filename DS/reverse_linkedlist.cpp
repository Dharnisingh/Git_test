#include <iostream>

using namespace std;

struct node
{
int data;
struct node* next;
};

typedef struct node* NODE;

NODE create_node(NODE head)
{
	NODE temp;
	NODE curr = head;
	temp = (NODE) malloc(sizeof(struct node));
	cout << "Enter Data: " ;
	cin >> temp->data;
	if(head ==NULL)
	{
		return temp;
	}
	while(curr->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next = temp;
	return head;

}

void print(NODE head)
{
	NODE curr = head;
	while(curr!=NULL)
	{
		cout << "Data :" << curr->data << endl; 
		curr = curr->next;
	}
}

int main()
{
int i;
NODE head=NULL;
for(i =0; i<10; i++)
{
	head = create_node(head);
}
print(head);
return 0;
}
