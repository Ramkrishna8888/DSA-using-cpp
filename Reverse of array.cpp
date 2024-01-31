#include<iostream>
using namespace std;
void reverse(int ar[],int n)
{
    int start = 0;
    int end = n-1;
    while(start <= end)
      {
        swap(ar[start],ar[end]);
          start++;
          end--;
      }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  cout <<endl;
}
int main()
{
    int ar[6] = {1,2,3,4,5,6};
    int br[5] = {0,9,8,7,6};
    
    reverse(ar,6);
    reverse(br,5);
    printarray(ar,6);
    printarray(br,5);
    return 0;
}