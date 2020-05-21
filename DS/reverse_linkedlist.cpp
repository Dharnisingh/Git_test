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
	cout << "Enter INT Data: " ;
	cin >> temp->data;
	//If head is empty make first node as head
	if(head == NULL)
	{
		return temp;
	}
	// Insert the node at the end
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

NODE reverse(NODE head)
{
	NODE tmp,curr=NULL;
	while(head!=NULL)
	{
		tmp = head;
		head = head->next;
		tmp->next = curr;
		curr = tmp;
	}
return curr;
}

int main()
{
NODE head=NULL;
for(int i=0; i<10; i++)
{
	head = create_node(head);
}
//Reverser the list
head = reverse(head);
print(head);

return 0;
}
