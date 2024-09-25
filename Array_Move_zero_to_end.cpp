# move zero at the end
#saral logic mein
#pehle non zero integers ko ek empty vector mein rakh lo fir bache hue place par zero bhar do dusre loop se
# two pointer concept

#include<iostream>
#include<vector>
using namespace std;
vector<int> zeroo (vector<int>arr, int n)
{
     vector<int> nums(n);
     int j = 0;
     for (int i = 0; i < n; i++)
     {
        if (arr[i]!=0)
        {
            nums[j] = arr[i];
            j++;
        }
     }

     for (int k = j; k < n; k++)
     {
         nums[k] = 0;
     }

       return nums;
}
int main()
{
    int n;
    cin>>n;
    int ele = 0;
    vector<int> z;
    for (int j = 0; j < n; j++)
    {
        cin>>ele;
        z.push_back(ele);
    }
    vector<int> x = zeroo(z,n);
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<" ";
    }
   return 0;
}
