// RETURNING THE ELEMENT THAT'S OCCURANCE  IS ONLY ONCE IN THE ARRAY
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> mp;
        for(int i =0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto it : mp)
        {
            if(it.second==1)
            {
                return it.first;
                break;
            }
        }
        return -1;
    }
};
