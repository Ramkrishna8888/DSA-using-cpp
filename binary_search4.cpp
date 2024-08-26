#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[100];
     int i,size;
     cout<<"Enter the size of the array : ";
     cin>>size;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];

    }
    int n;
    cout<<"Enter the number to be searched : ";
    cin>>n;
    int start = 0;
     int end = size-1;
     int mid;
     while(start <= end)
     {
        mid= start +(end-start)/2; // it's a good practice so that the size of integer can't be more than 2^31-1
        if(start<=end)
        {
        if(n==arr[mid])
        {
            cout<<"The element found  at index "<<mid;
            
        }
        if(n<arr[mid])
        {
            end = mid-1;
       }
        else
        {         
             start = mid+1;
        }
     }
     else
         cout<<"The element is not present in the array ";
     }
   return 0;
}
