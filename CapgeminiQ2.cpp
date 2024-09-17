// a b a c a a -->> a3b1c1   // when non unique character
//a b c d e f -->> 1+1+1+1+1+1 = 6 // when unique character 
#include<iostream>
#include<map>
#include<vector>
using namespace std;
void fun1(vector<char> arr)
{
    int sum=0;
    map<char,int> x;
    for (int i = 0; i < arr.size(); i++)
    {
        x[arr[i]]++;
    }
    for(auto itt:x)
    {
       if(itt.second>1)
       {
        cout<<itt.first<<itt.second;
       }
       else
       {
        sum = sum + 1;
       }
    } 
    cout<<sum;
}
int main()
{
    vector<char> arr;
    int size=0;
    char ele;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    fun1(arr);
}