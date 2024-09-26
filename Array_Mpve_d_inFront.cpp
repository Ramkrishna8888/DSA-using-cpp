# MOVING 'd' AT THE FRONT IN AN char ARRAY
# SIMPLE LOGIC
#include<iostream>
#include<vector>
using namespace std;
vector<char> Moved(vector<char> arr)
{
     int size = arr.size();
     vector<char> nums(size);
     int count = 0;
     for (int i = 0; i < size; i++)
     {
        if(arr[i]!='d')
        {
            nums[count] = arr[i];
            count++;
        }
     }

     for (int j = count; j < size; j++)
     {
        nums[j] = 'd';
     }
     return nums;
}
int main()
{
    char ele=0;
    int n=0,i=0;
    cin>>n;
    vector<char> arr;
    for (i = 0; i < n; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    vector<char> z = Moved(arr);
    for (i = 0; i < n; i++)
    {
        cout<<z[i]<<" ";
    }
    return 0;
}
