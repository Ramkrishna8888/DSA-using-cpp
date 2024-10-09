#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) { 
    int maximum = 0;
    for(int i = 0; i < a.size(); i++) {
        int sum = 0;  // Reset sum for each starting index i
        for(int j = i; j < a.size(); j++) {
            sum = sum + a[j];  // Add the current element to sum
            if(sum == k) {
                int length = j - i + 1;  // Calculate the length of the current subarray
                maximum = max(maximum, length);  // Update maximum if needed
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
