class Solution {
public:
    string digits[19] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight","Nine",
"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen",   "Nineteen"};
    
    string tens[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    string int2english(int num){
        if(num >= 1000000000){
            return int2english(num / 1000000000) + " Billion" + int2english(num % 1000000000);
        }
        if(num >= 1000000){
            return int2english(num / 1000000) + " Million" + int2english(num % 1000000);
        }
        if(num >= 1000){
            return int2english(num / 1000) + " Thousand" + int2english(num % 1000);
        }
        if(num >= 100){
            return int2english(num / 100) + " Hundred" + int2english(num % 100);
        }
        if(num >= 20){
            return " " + tens[num / 10 - 2] + int2english(num % 10);
        }
        if(num > 0){
            return " " + digits[num - 1];
        }
        return "";
    }
    
    string numberToWords(int num) {
        if(num == 0){
            return "Zero";
        }
        string ans = int2english(num);
        ans = ans.substr(1, ans.length() - 1);
        return ans;
    }
};
