#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); // The number of elements in the vector
        int expectedSum = n * (n + 1) / 2; // Sum of numbers from 0 to n
        int actualSum = 0; // Initialize sum of the elements in the vector
        
        // Calculate the sum of the elements in the vector
        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }
        
        // The missing number is the difference between the expected and actual sums
        return expectedSum - actualSum;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array (excluding the missing number): ";
    cin >> n;

    vector<int> nums(n); // Declare a vector to store the numbers

    cout << "Enter " << n << " numbers between 0 and " << n << " (one number should be missing): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int missingNum = solution.missingNumber(nums);

    cout << "The missing number is: " << missingNum << endl;

    return 0;
}
