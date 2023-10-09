//
// Created by Chen Hua on 2023-10-08.
//
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 1, 1, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> unordered;
    for (int i = 0; i < n; i++) unordered[arr[i]]++;

    // https://stackoverflow.com/questions/6212619/sorting-stdunordered-map-by-key
    map<int, int> ordered(unordered.begin(), unordered.end());
    cout << "Key  Value" << endl;
    for (auto it = ordered.begin(); it != ordered.end(); it++) {
        cout << it->first << "      " << + it->second << endl;
    }
}
