class Solution {
public:

    
    string encode(vector<string>& strs) {
        // for encoding we will add length + # with the string
        string final_string;
        for(string &a : strs){
            final_string += to_string(a.size()) + '#' + a;
        }

        return final_string;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i < s.length()){
            int j = s.find('#', i); //this is # index
            int len = stoi(s.substr(i,j-i));
            res.push_back(s.substr(j+1, len));
            i = j+1+len;
        }

        return res;
    }
};
