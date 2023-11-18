//
// Created by Chen Hua on 2023-10-23.
//
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<string> vec;
        int i = 0;
        int j = 0;
        string local_str = "";
        while (j < s.length()) {
            char currChar = s.at(j);
            local_str += currChar;
            vec.push_back(local_str);
            while (i < j && local_str.find(currChar) != string::npos) {
                i++;
                local_str = s.substr(i, j - i);
            }
            j++;
        }
//        for (auto &i : vec) cout << i << " ";
        return 0;
    }
};

int main() {
//    cout << "Hello World!" << endl;
    Solution s;
    string str = "abac";
//    cout << str.substr(2,2) << endl;
    s.lengthOfLongestSubstring(str);
    return 0;
}
