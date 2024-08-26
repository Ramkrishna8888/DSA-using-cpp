#include<iostream>
using namespace std;
void Selection(int arr[],int size)
{
    int i;
     for (i = 0; i < size; i++)
     {
        int minimum = i;
        for (int j = i+1; j < size; j++)
        {
            if(arr[j]<arr[minimum])
            minimum = j;
        }
        swap(arr[minimum],arr[i]);
     }
     
     for ( i = 0; i < size; i++)
     {
        cout<<arr[i]<<" ";
     }
     
}
int main()
{
    int arr[5] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<endl<<"Before Sorting : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<endl<<"After Sorting : "<<endl;
    Selection(arr,size);
return 0;
}