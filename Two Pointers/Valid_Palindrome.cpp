class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto x:s){
            x = tolower(x);
            if(isalnum(x))   str+=x;
            else continue;
        }
        //cout<<str<<endl;
        int j = str.size()-1,i=0;

        while(i<j){
            if(str[i]!=str[j])  return false;
            i++;
            j--;
        }
        return true;
    }
};
