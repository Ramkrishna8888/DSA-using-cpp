 void rotate(vector<int>& nums, int k) {

       // ye hai love babbar mahraj ki logic saste mein kaam niptane ke liye
       // Bss formula yaad rkhna hai jo shyd hi mujhe yaad rahega let's see

        int size = nums.size();
        vector<int> arr(size);
        for(int i=0;i<size;i++)
        {
         arr[(i+k)%size] = nums[i];
        }
        nums = arr;
    }
