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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if(head1==NULL)
    {
        return head2;
    }
    
    
    if(head2==NULL)
    {
        return head1 ;
    }
    Node *head=NULL;
    Node *tail=NULL;
  
    if(head1->data<=head2->data){
        head=head1;
        tail=head1;
        head1=head1->next;     
    }
    else{
       head=head2;
       tail=head2;
       head2=head2->next;
    }
    while(head1!=NULL &&head2!=NULL){
        if(head1->data<=head2->data){
            tail->next=head1;
            tail=tail->next;
            head1=head1->next;
        }
        else{
            tail->next=head2;
            tail=tail->next;
            head2=head2->next;
        }
    }    
        if(head1==NULL){
            tail->next=head2;
        }
        if(head2==NULL){
            tail->next=head1;
        }
    return head;
    
}
int Length(Node* head)
{
	int count = 0;
	Node* current = head;
	while (current != NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}
void FrontBackSplit(Node* source, Node *frontRef,Node *backRef)
{
	int len = Length(source);
	if (len < 2)
	{
		frontRef = source;
		backRef = NULL;
		return;
	}

	Node *current = source;

	int hopCount = (len - 1) / 2; // (figured these with a few drawings)
	for (int i = 0; i < hopCount; i++)
		current = current->next;

	// Now cut at current
	frontRef = source;
	backRef = current->next;
	current->next = NULL;
}

Node *mergeSort(Node *head)
{
	//Write your code here
    Node *thead=head;
    Node *ptr1;
    Node *ptr2;
    if((head==NULL)||(head->next==NULL)){
        return head;
    }
    FrontBackSplit(head,ptr1,ptr2);
    mergeSort(ptr1);
    mergeSort(ptr2);
    head=mergeTwoSortedLinkedLists(ptr1,ptr2);
    return thead;
    
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}