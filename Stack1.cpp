#include<iostream>
#include<stack>
// Basic stack operations
using namespace std;
int main()
{
   // Creating an stack using STL
   stack<int> n;
   
   // push operation for insertion of element
   n.push(2);
   n.push(3);

   // pop operation for the deletion of the element
   n.pop();

   // Top operation is for checking the top element in the stack
   cout<<"Top element "<< n.top()<<endl;

   // size operator is for checking the size of the stack
   cout<<"The size of the stack is"<<n.size()<<endl;
   
   // using empty function for checking weather the stack is empty or not
   if(n.empty())
   {
    cout<<"The stack is empty ";
   }
   else
   {
    cout<<"The stack is not empty ";
   }
return 0;

}
