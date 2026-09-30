class Solution {
public:
    bool isPalindrome(int x) {
        int m=x;
        long long iput=0;
        while(x>0){
            int r=x%10;
            iput = iput*10+r;
            x=x/10;
        }
        if(iput==m){
            return true;
        }
        else{
            return false;
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna