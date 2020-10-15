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

Node* swapNodes(Node *head,int i,int j)
{
    //write your code here
    if(head==NULL || head->next ==NULL)
        return head;
    if((i==0||j==0)&&((i-j!=1)&&(j-i!=1)))
    {
        if(i==0)
        {
            Node *c1 = head;
            Node *p2 = head;
            for(int a=0;a<j-1;a++)
            {
                if(p2!=NULL)
                p2 = p2->next;
                else 
                    return head;
            }
            Node *c2 = p2->next;
            head = c2;
            Node *b = c1->next;
            c1->next = c2->next;
            p2->next = c1;
            c2->next = b;
            //delete b;
            return head;
        }
        else
        {
            Node *c1 = head;
            Node *p2 = head;
            for(int a=0;a<i-1;a++)
            {
                if(p2!=NULL)
                p2 = p2->next;
                else
                    return head;
            }
            Node *c2 = p2->next;
            head = c2;
            Node *b = c1->next;
            c1->next = c2->next;
            p2->next = c1;
            c2->next = b;
           // delete b;
            return head;
        }
    }
    else if(((i-j)==1||(j-i==1)) &&(i!=0 && j!=0))
    {
        if(j>i)
        {
            Node *p1 = head;
            for(int a=0;a<i-1;a++)
            {
                if(p1!=NULL)
                p1 = p1->next;
                else 
                    return head;
            }
            Node *c1 = p1->next;
            Node *c2 = p1->next->next;
            c1->next = c2->next;
            c2->next = c1;
            p1->next = c2;
            return head;
        }
        else
        {
            Node *p1 = head;
            for(int a=0;a<j-1;a++)
            {
                if(p1!=NULL)
                p1 = p1->next;
                else
                    return head;
            }
            Node *c1 = p1->next;
            Node *c2 = p1->next->next;
            c1->next = c2->next;
            c2->next = c1;
            p1->next = c2;
            return head;
        }
    }
    else if((i==0||j==0)&&((i-j==1)||(j-i==1)))
    {
            Node *c1 = head;
            Node *c2 = head->next;
            c1->next = c2->next;
            head = c2;
            c2->next = c1;
            return head;
    }
    else
    {
        Node *p1 = head;
        for(int a=0;a<i-1;a++)
        {
            if(p1!=NULL)
            p1=p1->next;
            else
                return head;
        }
        Node *c1 = p1->next;
        Node *p2 = head;
        for(int a=0;a<j-1;a++)
        {
            if(p2!=NULL)
            p2=p2->next;
            else
                return head;
        }
         Node *c2 = p2->next;
        p1->next = c2;
        p2->next = c1;
        Node *b = c1->next;
        c1->next = c2->next;
        c2->next = b;
        return head;
    }
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
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}