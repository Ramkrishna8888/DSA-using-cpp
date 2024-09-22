class Solution {
public:
    bool check(vector<int>& nums) {
       int size = nums.size();
       int count = 0;
       for(int i = 1; i<size; i++)
       {
        if(nums[i-1]>nums[i]){
          count++;
        }
       }
       if(nums[size-1]>nums[0])
          count++;
       
       return count <= 1;
    }

};
// IMPORTANT LOGIC
// checking sorted and rotated
