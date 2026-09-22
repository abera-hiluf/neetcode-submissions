class Solution {
public:
    bool isPalindrome(string s) {
        string forward;
        string reverse;
        for (int i=0;i<s.size();i++){
            if(isalnum(s[i])){
            forward.push_back(tolower(s[i]));
            }
           
        }
         
        for(int j=forward.size()-1;j>=0;j--){
            reverse.push_back(forward[j]);
            
        }
       
    
    if (forward==reverse){
        return true;
    }
    else{
        return false;
    }
    }
};
