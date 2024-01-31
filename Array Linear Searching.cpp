#include<iostream>
using namespace std;

    int Search(int arr[],int size,int element)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==element)
            {
                return i;
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
         int match = Search(arr,10,ele);
         if(match>0)
         {
         cout<<"The element found in the array at idx "<<match<<endl;
         }
         else
         cout<<"The element is not found in array "<<endl; 
    }
