//0 1 1 2 3 5 8
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
void fibo(int n){
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<" ";
        int next = a+b;
        a=b;
        b=next;
    }

}
int main()
{
    int n;
    cout<<"Enter the limit"<<endl;
    cin>>n;
    fibo(n);
}