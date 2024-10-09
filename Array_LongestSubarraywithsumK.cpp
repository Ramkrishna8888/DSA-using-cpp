#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) { 
     int maximum = 0;
     int sum = 0;
     for(int i =0; i<a.size(); i++)
     {
         for(int j =i; j<a.size(); j++)
         {
             sum = sum + a[j];
           if(sum==k)
           {
            int length = j-i+1;
             maximum = max(maximum,length);
            return maximum+1;
           }
         }
     }
      return maximum;
}

int main() {
    int n, k;
    vector<int> z;
    
    cout << "Enter 8 elements: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> n;
        z.push_back(n); 
    }
    
    cout << "Enter the target sum (k): ";
    cin >> k;

    int ans = longestSubarrayWithSumK(z, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << ans << endl;

    return 0;
}
