// ============================================
// Date: 04-06-2026
// Problem: Largest Element in Array
// Platform: GeeksforGeeks
// Difficulty: Easy
// Topic: Arrays
// ============================================
// Approach:
//   Linear traversal. Initialize maxVal with the
//   first element. Iterate through array and update
//   maxVal whenever a larger element is encountered.
//
// Time Complexity: O(n)
// Space Complexity: O(1)
// ============================================

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    vector<int> arr = {3, 5, 1, 9, 2, 7};
    cout << "Largest Element: " << largestElement(arr) << endl;
    // Output: Largest Element: 9
    return 0;
}
