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
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    Node *temp = head;
    if(M==0){
        return NULL;
    }
    while(temp!=NULL){
        for(int i=0;i<M-1;i++){
            if(temp!=NULL){
                temp=temp->next;
            }
            else{
                break;
            }
        }
        Node *p = temp;
         if(temp==NULL){
            return head;
        }
        for(int j= 0;j<N;j++){
            
            if(temp!=NULL && temp->next!=NULL && p->next!=NULL){
                p=temp->next;
                temp->next=p->next;
                delete(p); 
            }
        }
        temp=temp->next;
   }
    return head;
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
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}