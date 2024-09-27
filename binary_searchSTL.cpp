# STL APPROACH IS DURING ANY CODING ROUND WHEN YOU HAVE VERY LIMITED TIME 

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

    // how to use sort stl function
    //sort(arr,arr+size);
    
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
