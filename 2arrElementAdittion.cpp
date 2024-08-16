#include<bits/stdc++.h>
using namespace std;
void Update(int arr[],int n)
{
    arr[0]=7;
}
int fun(int arr[],int n)
{
    int z,add=0;
    for (int i = 0; i < n; i++)
    {
           z = arr[i]%10;
           add=add+z;
           z=arr[i]/10;    
    }
    return add; 
}
int main()
{
    int arr[100];
    int size;
     cout<<"Enter the size of the array"<<endl;
     cin>>size;
    for (int i = 0; i < size; i++)
    {
         cin>>arr[i];
    }
    // addition of the element of the array
     int x = fun(arr,size);
    cout<<"The addition of the elements is "<<x<<endl;
    //array index value updation
    Update(arr,size);
    cout<<"Elements in the array is "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }

}