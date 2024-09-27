#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter the key"<<endl;
    cin>>x;

    bool res = binary_search(arr,arr+size,x);
    
    if(res)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}