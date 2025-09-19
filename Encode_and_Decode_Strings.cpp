class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(auto x:strs){
            encoded+=to_string(x.size())+'#'+x;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>strs;

        for(int i =0;i<s.size();){
            int j=i;
            while(s[j]!='#')    j++;
            int len = stoi(s.substr(i,j-i));
            string ss = s.substr(j+1,len);
            strs.push_back(ss);
            i=j+1+len;
        }
        return strs;
    }
};
