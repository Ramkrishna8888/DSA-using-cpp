#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5,4,3,2,1};
    int i,j;
    int n =sizeof(arr)/sizeof(arr[0]);
     for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"After loop "<<endl;
    for (i = 0; i < n-1; i++)
    {
        int min = i;
        for (j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            min=j;
        }
         swap(arr[min],arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}