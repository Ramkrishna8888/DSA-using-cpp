//Inserting element on head
#include<bits/stdc++.h>
using namespace std;
//creation of the node
class Node{
     public:
     int data;
     Node* next;
//Contructor called
     Node(int d)
     {
        data=d;
        this->next=NULL;
     }
};
void insertAtHead(Node* &head, int d) {

    // creation of new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node* &head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
     cout<< endl;
}
  int main()
  {
    // object creation for the node
     Node* node1 = new Node(10);
     Node* head = node1;
      print(head);
   // inserting the second element
     insertAtHead(head, 11);
      print(head);
  }
