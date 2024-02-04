#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int n,int x)
{
   int start=0;
   int end=n-1;
   while(start<=end)
   {
      int mid= (start+end)/2;
       if(arr[mid]>x)
       {
         end=mid-1;
       }
       else if(arr[mid]<x)
       {
        start=mid+1;
       }
       else{
        return mid;
       }
   }
   return -1;
}
int main()
{
  int i,n,x;
   cin>>x;
   int arr[]={1,4,2,3,5};  
    sort(arr,arr+n);
    n=sizeof(arr);
    cout<<"Enter the element for searching"<<endl;
    int y=binary(arr,n,x);
    if(y>1)
    {
    cout<<"The element is found at the index"<<y<<endl;
    }
    else
    {
      cout<<"The element is not present in the array"<<endl;
    }
    return 0;
}