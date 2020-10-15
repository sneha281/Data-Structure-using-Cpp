//bubble sort iterative
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

Node *bubbleSort(Node *head)
{
	// Write your code here
     Node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL) {  
            return head;  
        }  
        else 
        {  
            while(current != NULL) 
            {  
                //Node index will point to node next to current  
                index = current->next;  
                  
               	 while(index !=NULL) 
                 {  
                    //If current node's data is greater than index's node data, swap the data between them  
                    if(current->data > index->data)
                    {  
                        temp = current->data;  
                        current->data = index->data;  
                        index->data = temp;  
                    }  
                    index = index->next;  
               	 }  
               	 current = current->next;  
            }  
            
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
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}