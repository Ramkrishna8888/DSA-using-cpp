#include<iostream>
#include<stack>
// Basic stack operations
using namespace std;
int main()
{
   // Creating an stack
   stack<int> n;
   
   // push operation for insertion of element
   n.push(2);
   n.push(3);

   // pop operation for the deletion of the element
   n.pop();

   // Top operation is for checking the top element in the stack
   cout<<"Top element "<< n.top()<<endl;
   
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
