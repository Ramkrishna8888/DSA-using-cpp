#include<iostream>
#include<map>
#include<string>
using namespace std;
void occurance(char arr[], int n)
{
    map<char,int> mp;
   
   for (int i = 0; i < n; i++)
   {
        mp[arr[i]]++;
   }
   for(auto &it : mp)
   {
    cout<<it.first<<" "<<it.second<<endl;
   }
}
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    occurance(arr,n);
}