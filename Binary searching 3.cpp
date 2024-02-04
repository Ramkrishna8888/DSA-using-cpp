#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size,int n)
{
    int start =0;
    int end = size-1;
// we can simply do mid = (start+end)/2 but at a particular
//condition logic will create more size than limit of 
// integer vaue
    int mid = start + (end-start)/2;
    while(start<=end)
    {
     if(arr[mid]==n)
     {
        return mid;
     }
     if(n>arr[mid])
     {
        start = mid +1;
     }
     if(n<arr[mid])
     {
        end = mid-1;
     }
     mid = start + (end-start)/2; 
}
return -1;
}
int main()
{
    int even[6]={1,2,3,4,5,6};
    int odd[5]={2,4,6,8,10};
    int evenans=binarysearch(even,6,4);
    cout<<"The vlaue for even array found at "<<evenans<<endl;
    int oddans=binarysearch(odd,5,6);
    cout<<"The vlaue for odd array found at "<<oddans<<endl;
    return 0;
}