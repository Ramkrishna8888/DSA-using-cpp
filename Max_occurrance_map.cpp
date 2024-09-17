#include<iostream>
#include<vector>
#include<map>
using namespace std;
int MaxOccur(vector<int> arr)
{
   int highfreq=0;
   int maxele = arr[0];
    map<int,int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
         mp[arr[i]]++;
    }   
    for(auto it:mp)
    {
        if(it.second>maxele)
        {
            highfreq = it.second;
            maxele = it.first;
        }
    }
    return maxele;
}
int main()
{
    int ele,size = 0;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        arr.push_back(ele);   
    }
   int z = MaxOccur(arr);
   cout<<"Highest occuring element is : "<<z<<endl;
}