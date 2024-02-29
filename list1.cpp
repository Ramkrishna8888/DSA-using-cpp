#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1;// list of 0 size
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
  // creatinng an iterator

  list<int> :: iterator iter;
  iter = list1.begin();
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";
  iter++;
return 0;
}
