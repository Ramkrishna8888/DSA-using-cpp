/*You have been given a sorted array/list 'arr' 
consisting of ‘n’ elements. You are also given 
an integer ‘k’.

Now, your task is to find the first and last 
occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the
 first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.

Example:
Explain
Input: 'arr' = [0,1,1,5] , 'k' = 1

Output: 1 2
Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first
 and last occurrence of 1 will be
 1(0 - indexed) and 2.*/
 #include<bits/stdc++.h>
 using namespace std;
 int firstposition(int arr[],int n,int k)
    {
         int start=0;
         int end = n-1;
          int  mid = start + (end-start)/2;
         int ans =-1;
         while(start<=end)
       {
          if(arr[mid]==k)
          {
              ans=mid; 
            end=mid-1;
          }
          else if(k>arr[mid])
          {
             start=mid+1;
          }
          else
          {
            end=mid-1;
          }
            mid = start + (end-start)/2;
       }
       return ans;
    }
    int lastposition(int arr[],int n,int k)
    {
        int start = 0;
        int end = n-1;
          int mid = start + (end-start)/2;
        int ans=-1;
        while(start<=end)
        {
    if(arr[mid]==k)
    {
      ans=mid;
       start = mid+1;
    }
    else if(k>arr[mid])
    {
      start = mid +1;
    } 
    else
    {
      end = mid-1;
    }
    mid = start + (end-start)/2;
   }
   return ans;
    }
int main()
{
    int i,n,k;
    cout<<"Enter the array Size :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    int arr[n];
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"Enter the element to find :"<<endl;
     cin>>k;
  cout<<"Enntered array : "<<endl;
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
    int first=firstposition(arr,n,k);
    int last=lastposition(arr,n,k);
  cout<<"First occurrence of "<<k<<" is at index "<<first<<endl;
   cout<<"last occurrence of "<<k<<" is at index "<<last<<endl;
    return 0;
}
