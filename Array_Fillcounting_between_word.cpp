# A NICE QUESTION FOR BUILDING THE LOGIC OF CHARACTER ARRAY

//input: important
//output: i1234567t

//input: Bilkulchup
//output: B12345678p

#include<iostream>
#include<vector>
using namespace std;
vector<char> MoveBetween(vector<char> arr)
{
    int size = arr.size();
    vector<char> nums(size);
     
     nums[0] = arr[0];

     nums[size - 1] = arr[size-1];
    
    for (int k = 1; k < size-1; k++)
    {
        nums[k] = '0' + k;
      //nums[k] = 48 + k; agar poora ascii code yaad rakhne wale gyaani ho toh ye bhi kr skte hai
    }
    return nums;
}
int main()
{
    int i=0,n=0;
    char ele;
    cin>>n;
    vector<char> arr;
    for (i = 0; i < n; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    vector<char> z = MoveBetween(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<z[i];
    }
    return 0;  
}
