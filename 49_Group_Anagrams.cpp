class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams_list;
        vector<vector<string>> ans;
        for(auto s:strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            anagrams_list[temp].push_back(s);
        }
        for(auto itr=anagrams_list.begin();itr!=anagrams_list.end();itr++){
            ans.push_back(itr->second);
        }
        return ans;
    }
};
