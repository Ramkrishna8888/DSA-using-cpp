#include<bits/stdc++.h>
using namespace std;
const int maxsize = 10;
void front(int arr[],int size,int x)
{
    int i;
    for(i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    size++;
    }
int main()
{
   int currentsize=0;   
    int arr[maxsize];
    int i;
    cout<<"Enter the size under "<<maxsize<<endl;
    cout<<"Enter the elements in the array"<<endl;
     cin>>currentsize;
     cout<<"Enter elements:"<<endl;
    for(i=0;i<currentsize;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the new element to enter"<<endl;
    cin>>x;
    front(arr,currentsize,x);
    cout<<"Updated array :"<<endl;
    for(i=0;i<currentsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}