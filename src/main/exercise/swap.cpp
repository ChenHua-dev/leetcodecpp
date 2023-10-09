//
// Created by Chen Hua on 2023-10-08.
//
#include <iostream>
#include <assert.h>

using namespace std;

class Solution {
public:
    void swap (int *i, int *j) {
        int temp = *i;
        *i = *j;
        *j = temp;
    }
};


int main () {
    Solution s;
    int val1 = 10;
    int val2 = 20;
    s.swap(&val1, &val2);
//    cout << "val1: " + std::to_string(val1) << endl;
//    cout << "val2: " + std::to_string(val2) << endl;

    //
    int x = 0;
    int &r = x;
    int *p = &x;
    int *p2 = &r;
    r = 10; // modify the value referenced by r, ie value of x
    assert(p == p2);
    cout << x << endl;
    cout << r << endl;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}