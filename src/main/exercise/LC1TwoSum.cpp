//
// Created by Chen Hua on 2023-10-07.
//
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // if complement is not in the dictionary
            if (map.find(complement) == map.end()) {
                map.insert({nums[i], i});
            } else {
                // if the complement already in the dictionary
                int complement_index = map[complement];
                return {i, complement_index};
            }
        }
        return {-1, -1};
    }
};

//int main() {
//    cout << "Hello World!" << endl;
//    return 0;
//}
