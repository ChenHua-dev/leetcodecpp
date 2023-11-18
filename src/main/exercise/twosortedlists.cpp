//
// Created by Chen Hua on 2023-11-08.
//
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> mergeSortedArrays(vector<int>& vec1, vector<int>& vec2) {
        int i = 0, j = 0;
        int n1 = vec1.size(), n2 = vec2.size();
        vector<int> ans;

        while (i < n1 && j < n2) {
            if (vec1[i] < vec2[j]) ans.push_back(vec1[i++]);
            else ans.push_back(vec2[j++]);
        }

        while (i < n1) ans.push_back(vec1[i++]);
        while (j < n2) ans.push_back(vec2[j++]);

        return ans;
    }
};

int main() {
    cout << "Hello world, two sorted lists" << endl;
    vector<int> vec1 = {1,8,13};
//    vector<int> vec1 = {};
    vector<int> vec2 = {2,39};
//    vector<int> vec2 = {};
    for (auto &num : vec1) cout << num << " ";
    cout << endl;
    for (auto &num : vec2) cout << num << " ";
    cout << endl;
    Solution s;
    vector<int> res = s.mergeSortedArrays(vec1, vec2);
    for (auto &num : res) cout << num << " ";
}

