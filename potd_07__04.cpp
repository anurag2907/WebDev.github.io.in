class Solution{   
public:
    int addMinChar(string str) {
        int len = str.length();
        int start = 0, end = len - 1;
        int res = 0;
        
        while(start < end) {
            
            if(str[start] == str[end]) start++, 
                                       end--;
            
            else {
                res++;
                start = 0;
                end = len - res - 1;
            }
            
        }
        
        return res;
    }
};
