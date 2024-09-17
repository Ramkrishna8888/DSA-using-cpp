// a,b,a,a,c,d,a,b,x,z,x -->>  return -1 is occurance is more then 1 then return -1;
//a,b,c,d,e,f,g,h -->> 1+1+1+1+1+1+1+1 if occurance is unique then return it's addition
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int element(vector<int> arr)
{
    int sum=0,ans=0;
    map<int,int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    for(auto z:mp)
    {
        if(z.second>1)
        {
            return -1;
        }
        else
        {
            sum = sum+1;
        }
    }
      return sum;
}
int main()
{
    vector<int> arr;
    int ele,size=0;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    int ans = element(arr);
    cout<<ans;
}