class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> smap;//1
        unordered_set<char> tset;//1
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){  //n
            if(smap.find(s[i])!=smap.end()){//old character
                if(smap[s[i]]!=t[i]){
                    return false;
                }
            }else{//fresh pair
                if(tset.find(t[i])!=tset.end())
                {
                    return false;
                }
                smap[s[i]] = t[i];
                tset.insert(t[i]);
            }
        }
        return true;
    }
};
