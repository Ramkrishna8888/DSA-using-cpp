class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           int i = 0;
           for(int j=1; j<nums.size(); j++)
           {
              if(nums[j]!=nums[i])
              {
               // i+1 ye hamesha dhyan rakhne ka next wale index prr dalegib agli unique value   
                nums[i+1] = nums[j];
                i++;
              }
           }
           return (i+1);  // + 1 isliye taki actual count pta chal paye unique element ka 
    }
};
