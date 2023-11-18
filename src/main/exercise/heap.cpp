//
// Created by Chen Hua on 2023-10-19.
//
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec = {3,2,-6,10,4};

    for (auto& i : vec) {
        cout << i << " ";
    }
    cout << endl;

    // max heap
    priority_queue<int, vector<int>, less<>> maxheap(vec.begin(), vec.end());
    while (!maxheap.empty()) {
        cout << maxheap.top() << " ";
        maxheap.pop();
    }
    cout << endl;
    // min heap
    priority_queue<int, vector<int>, greater<>> minheap(vec.begin(), vec.end());
    while (!minheap.empty()) {
        cout << minheap.top() << " ";
        minheap.pop();
    }

}

