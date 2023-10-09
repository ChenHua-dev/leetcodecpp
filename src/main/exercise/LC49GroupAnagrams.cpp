//
// Created by Chen Hua on 2023-10-08.
//
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> unordered;
        for (auto str : strs) {
            string word = str; // deep copy
            sort(str.begin(), str.end());
            unordered[str].push_back(word);
        }

        vector<vector<string>> res;
        unordered_map<string, vector<string>>::iterator it;
        for (it = unordered.begin(); it != unordered.end(); it++) {
            res.push_back(it->second);
        }
        return res;
    }
};