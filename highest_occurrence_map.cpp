#include<iostream>
#include<vector>
#include<map>
using namespace std;
void higOccu(vector<char> arr)
{
    int size = arr.size()-1;
    map<char,int> mp;
    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }
    int ans = 0;
    char ans2;
    for(auto it:mp)
    {
        if(it.second>1)
        {
            ans2 = it.first;
            ans = it.second;
        }
    }
    cout<<"Highest occurance is "<<ans<<" of char "<<ans2<<endl;

}
int main()
{
  vector<char> arr = {'a','b','a','a','c','b'};
  higOccu(arr);
}