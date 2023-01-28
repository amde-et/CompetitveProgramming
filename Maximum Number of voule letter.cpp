class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0,m=0;
        int i=0,j=0;
        while(j<s.length()){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            c++;
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                m=max(c,m);
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c--;
                i++;j++;
            }
        }
        return m;
    }
};
