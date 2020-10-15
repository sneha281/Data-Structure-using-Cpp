#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
Node *evenAfterOdd(Node *head)
{
	//write your code here
    Node *oddhead=NULL;
    Node *oddtail=NULL;
    Node *evenhead=NULL;
    Node *eventail=NULL;
    while(head!=NULL){
        if(head->data%2!=0){
            if(oddhead==NULL){
                oddhead=head;
                oddtail=head;
            }
            else{
                oddtail->next=head;
                oddtail=oddtail->next;
            }
        }
        else{
            if(evenhead==NULL){
                evenhead=head;
                eventail=head;
            }
            else{
                eventail->next=head;
                eventail=eventail->next;
            }
        }
        head=head->next;
    }
    if(oddtail==NULL){
        return evenhead;
    }
    if(evenhead==NULL){
        return oddhead;
    }
    oddtail->next=evenhead;
    eventail->next=NULL;
    return oddhead;
}


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}