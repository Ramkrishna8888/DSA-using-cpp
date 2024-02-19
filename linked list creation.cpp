#include<bits/stdc++.h>
using namespace std;
// node creation
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
  int main()
  {
    // object creation for the node
     Node* node1 = new Node(10);
     cout<<node1 -> data<<endl;
     cout<<node1 -> next <<endl;
  }
