#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> x;
    int size, ele;
    cin>>size;
    for(int i =0; i<size; i++)
    {
        cin>>ele;
        x.push_back(ele);
    }
    int start = 0;
    int end = size-1;
    while(start<end)
    {
        swap(x[start],x[end]);
        start++;
        end--;
    }
    for(int j =0; j<size; j++)
    {
        cout<<x[j]<<" ";
    }
    return 0;
}
