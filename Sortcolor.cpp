void sortColors(vector<int>& nums) {
        int z = 0; int o = 0;int t = 0;
        for(auto item:nums){
            if(item ==0) z++;
            else if(item == 1)o++;
            else if(item ==2)t++;
        }
       for(int i =0;i<nums.size();i++){
           if(i <z) nums[i] =0;
           else if( i <o+z) nums[i] =1;
           else if(i <t+o+z) nums[i] =2;
       }
    }`
