class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> smap;//1
        unordered_set<string> tset;//1
        // if(pattern.length()!=s.length()){
        //     return false;
        // }
        int i,j;
        for(i=0,j=0;i<pattern.length()&&j<s.length();i++){  //n
            int p;
            for(p=j;s[p]!=' '&&p<s.length();p++){                
            }
            string temp = s.substr(j,p-j);
            
            if(smap.find(pattern[i])!=smap.end()){//old character
                if(smap[pattern[i]]!=temp){
                    return false;
                }
            }else{//fresh pair
                if(tset.find(temp)!=tset.end())
                {
                    return false;
                }
                smap[pattern[i]] = temp;
                tset.insert(temp);
            }
            j=p+1;
        }
        if(i<pattern.length()||j<s.length())
        {
            return false;
        }
        return true;
    }
};
