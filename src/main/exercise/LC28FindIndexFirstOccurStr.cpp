//
// Created by Chen Hua on 2023-11-02.
//
#include <string>
#include <iostream>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int hIndex = 0;
        int nIndex = 0;
        while (hIndex < haystack.length()) {
            if (haystack[hIndex] == needle[nIndex]) {
                nIndex++;
            } else {
                hIndex = hIndex - nIndex; // return to its original point, then increment 1 at the end of while-loop
                nIndex = 0;
            }
            if(nIndex == needle.length()){ // if found
                return hIndex - needle.length() + 1;
            }
            hIndex++;
        }
        return -1;
    }
};

int main() {
//    cout << "hello LC28" << endl;
    Solution s;
    cout << s.strStr("mississippi", "issip") << endl;

}