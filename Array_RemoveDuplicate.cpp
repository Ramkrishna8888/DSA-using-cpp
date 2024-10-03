class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           int i = 0;
           for(int j=1; j<nums.size(); j++)
           {
              if(nums[j]!=nums[i])
              {
               // i+1 ye hamesha dhyan rakhne ka next wale index prr dalegi agli unique value   
                nums[i+1] = nums[j];
                i++;
              }
           }
           return (i+1);  // + 1 isliye taki actual count pta chal paye unique elemment kaa
    }
};

// FULL CODE 

#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& arr, int n)
{
    int j=0;
    for (int i = 1; i < n; i++)
    {
       if(arr[j]!=arr[i])
       {
        arr[j+1] = arr[i];
        j++; 
       }
    }
    return j+1;
}
int main()
{
    int size;
    int num;
    vector<int> arr;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>num;
        arr.push_back(num);
    }
   int ans = removeDuplicates(arr,size);
   for (int k = 0; k < ans; k++)
   {
        cout<<arr[k]<<" ";
   } 

   cout<<endl<<"Unique emlements are : "<<ans;   
}
