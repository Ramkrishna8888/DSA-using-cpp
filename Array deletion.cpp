
#include<iostream>
using namespace std;
int main()
{
    int size,index,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int ar[size];
     for(i=0;i<size;i++)
     {
        cin>>ar[i];
     }
     cout<<"Enter the index of element to delete"<<endl;
      cin>>index;
    //Deleting the given element
     for(i=index;i<size;i++)
     {
        ar[i]=ar[i+1];
     }
      size--;
      for(i=0;i<size;i++)
      {
        cout<<ar[i];
      }
      return 0;
}
