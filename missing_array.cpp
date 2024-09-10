#include<iostream>
#include<vector>
using namespace std;
string movehash(string str){
    
    string z="";
    int i =0;
    for (i = 0; i < str.length(); i++)
    {
        if(str[i]=='#')
        {
            z=z+'#';
        }
    }
    for (i = 0; i < str.length(); i++)
    {
        if(str[i]=='f')
        {
            z=z+'f';
        }
    }
    return z;
}
int main(){
    string str="f#f#f";
    cout<<movehash(str);
}