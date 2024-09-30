#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int FirstOcc(vector<int> x, int size, int key){

 int index = lower_bound(x.begin(), x.end(), key) - x.begin();
   if(index!=size && x[index]==key)
   {
      return index;
   } 
   else{
      return -1;
   }
}
int main()
{
    int n=0;
    cin>>n;
    int key=0;
    vector<int> x;
    int ele = 0;
    cout<<"Enter the elements in sorted order : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>ele;
        x.push_back(ele);
    }
    cout<<"Enter the number to find "<<endl;
    cin>>key;
    int res = FirstOcc(x,n,key);
    cout<<"The first occurance of "<<key<<" is on "<<res<<" index."<<endl;
    return 0;
}
