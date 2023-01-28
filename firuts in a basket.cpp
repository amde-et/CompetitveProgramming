class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int,int> mpp;
        int i=0,j=0;
        int count=0;
        int length=0,max_length=0;
        while(i<fruits.size())
        {
            if(mpp[fruits[i]]==0)
            {
                while(count>=2)
                    {
                        mpp[fruits[j]]-=1;
                        if(mpp[fruits[j]]==0)
                            count--;
                        j++;
                        length--;
                    }
                    count++;
                    mpp[fruits[i]]+=1;
                    length++;
                    i++;
            }
            else
            {
                mpp[fruits[i]]+=1;
                i++;
                length++;
            }
            max_length= max(length,max_length);
        }
        return max_length;
    }
};
