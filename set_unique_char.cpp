// SIMPLE PROGRAM TO UNDERSTAND THE SET DATA STRUCTURE
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<climits>
//some unusual libraries used just trying to remember them so i've written them 
using namespace std;
/*
# Unique characters 
int main()
{
     set<char> unique;
     int size;
     cout<<"Enter the size :"<<endl;
     cin>>size;
     char c;
     for (int i = 0; i < size; i++)
     {
         cin>>c;
         unique.insert(c);
     }
     cout<<"Unique characters : "<<endl;
     for(char it :  unique)
     {
        cout<<it<<" ";
     }    

}*/

//OOPS APPROACH
void uniqueChar(vector<char>& ch)
{
    //defining set data structure to store the unique characters 
    set<int> unique;
    int size = ch.size();
    for (int i = 0; i < size; i++)
    {
        unique.insert(ch[i]);
    }
    // Clear the vector and copy unique elements back from the set
    ch.clear();  // Clear the vector to store only unique characters
    for (char c : unique) {
        ch.push_back(c);  // Insert unique characters back into the vector
    }
}

int main()
{
      vector<char> arr;
      int size;
      cout<<"Enter the size : "<<endl;
      cin>>size;
      char ch;
      for (int i = 0; i < size; i++)
      {
        cin>>ch;
        arr.push_back(ch);
      }
      uniqueChar(arr);
      for(char it : arr)
      {
        cout<<it<<" ";
      }
    return 0;
}
