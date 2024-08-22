#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size,i;
    bool x=true;
     cout<<"Enter the size of array : ";
     cin>>size;
     for (int i = 0; i < size; i++)
     {
        cin>>arr[i];
     }
     for (int i = 0; i < size-1; i++)
     {
        if(arr[i]>arr[i+1])
        {
           x=false;
           break;
        }
     }
     if(x)
     {
        cout<<"Given array is sorted"<<endl;
     }
     else
     {
        cout<<"Given array is not sorted"<<endl;
     }     
     return 0;
}