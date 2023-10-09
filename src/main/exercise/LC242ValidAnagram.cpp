//
// Created by Chen Hua on 2023-10-08.
//
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapS;
        unordered_map<char , int> mapT;
        fillInHashMap(mapS, s);
        fillInHashMap(mapT, t);
//        cout << "In anagram" << endl;
        if (mapS.size() != mapT.size()) return false;
//        cout << "After checking size" << endl;
        // for (unordered_map<char, int>::const_iterator it = mapS.begin() ; it != mapS.end() ; it++) {
        for (auto it = mapS.begin() ; it != mapS.end() ; it++) {
//            cout << "In loop" << endl;
//            cout << "Hello, world" << endl;
            cout << to_string(it ->first) + ": " + std::to_string(it->second) << endl;
            bool hasChar = mapT.find(it->first) == mapT.end();
//            cout << hasChar << endl;
            int sCount = mapS[it->first];
            int tCount = mapT[it->first];
            if (hasChar || sCount != tCount) {
                return false;
            }
        }
        return true;
    }

    static void fillInHashMap(unordered_map<char, int> &map, const string& str) {
        for (char c : str) {
            if (map.find(c) == map.end()) {
                map[c] = 1;
            } else {
                map[c] += 1;
            }
        }
    }
};

int main() {
    Solution s;
//    cout << s.isAnagram("rat", "car") << endl;
    cout << s.isAnagram("aa", "a") << endl;
//    cout << "Hello, world!" << endl;
}
