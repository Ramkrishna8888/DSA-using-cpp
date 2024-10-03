#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> Unionn(vector<int> arr, vector<int> arr2)
{
   set<int> x;
   for (int i = 0; i < arr.size(); i++)
   {
       x.insert(arr[i]);
       }
       for (int j = 0; j < arr2.size(); j++)
       {
        x.insert(arr2[j]);
       }
       arr.clear();
       for (auto it : x)
       {
          arr.push_back(it);
       }
      return arr;  
   }
int main()
{
    vector<int> x= {1,2,3,3};
    vector<int> y= {2,2,4};
   vector<int> z = Unionn(x,y);
   for(auto i : z)
   {
    cout<<i<<" ";
   }
   return 0;
}
