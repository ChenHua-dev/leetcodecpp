//
// Created by Chen Hua on 2023-10-14.
//
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int numZeros = 0;
        int windowConsec = 0;
        int globalConsec = 0;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                numZeros++;
                while (numZeros > 1) {
                    if (nums[i] == 0) {
                        numZeros--;
                    }
                    i++;
                }
            }
            windowConsec = j - i + 1;
            j++;
            globalConsec = max(globalConsec, windowConsec);
        }
        return globalConsec;
    }
};

int main() {
    Solution s;
    std::vector<int> vec = {1, 0, 1, 1, 0};
    s.findMaxConsecutiveOnes(vec);
}


