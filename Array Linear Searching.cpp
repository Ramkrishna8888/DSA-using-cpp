#include<iostream>
using namespace std;

    bool Search(int arr[],int size,int element)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==element)
            {
                return 1;
            }
        }
        return 0;
    }
    int main()
    {
        int arr[10] = {1,2,3,4,5,6,7,8,9,11};
        cout<<" Enter the element to search for "<<endl;
         int ele;
         cin>>ele;
         bool match = Search(arr,10,ele);
         if(match)
         {
            cout<<"The element is found in the array "<<endl;
         }
         else
         {
            cout<<"The element is not found in the array"<<endl;
         }
    }
