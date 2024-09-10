#include<iostream>
#include<climits>
using namespace std;
void max(int arr[], int size)
{
    int first = INT_MIN;
    int second = INT_MIN;
    int i;
    for (i = 0; i < size; i++)
    {
        if(arr[i]>first)
        {
             second = first;
            first = arr[i];
        }
        else
        if(arr[i]<first && arr[i]>second)
        {
            second = arr[i];
        }
    }
    cout<<"Second largest : "<<second;

}
int main()
{
    int arr[] = {1,8,5,3,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    max(arr,size);
    
}