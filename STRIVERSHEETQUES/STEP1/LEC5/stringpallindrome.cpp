int helper( const string &s , int start , int end){
        if(start>=end){
            return true;
        } 


    while (!isalnum(s[start]) && start < end) {
        start++;
    }
    while (!isalnum(s[end]) && start < end) {
        end--;
    }
    
    // If characters at start and end are not equal, it's not a palindrome.
    if (tolower(s[start]) != tolower(s[end])) {
        return false;
    }

        return helper(s,start+1,end-1);
    }

    bool isPalindrome(const string &s) {
        
        int n = s.size()-1;
        return helper(s ,0 , n );
        
    }
};