#include <iostream>
#include <vector>
#include <algorithm> // std::swap এর জন্য

using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // অ্যারের শুরু এবং শেষের ইনডেক্স সেট করা হচ্ছে
        int left = 0;                      
        int right = arr.size() - 1;        

        // যতক্ষণ বাম পয়েন্টার ডান পয়েন্টারের চেয়ে ছোট থাকে, ততক্ষণ লুপ চলবে
        while(left < right) {
            // দুটি উপাদান অদলবদল (swap) করা হচ্ছে
            swap(arr[left], arr[right]);
            
            // পয়েন্টারগুলোকে মাঝের দিকে সরিয়ে আনা হচ্ছে
            left++;
            right--;
        }
    }
};

void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
      // size_t হলো একটি Unsigned Type: এর মানে এতে কোনো ঋণাত্মক (Negative) সংখ্যা রাখা যায় না। 
      // এটি সব সময় 0 থেকে শুরু হয়ে ধনাত্মক সংখ্যা ধারণ করে।
      // ভেক্টরের সাইজ জানতে: C++ এ vector বা array-এর আকার (size) এবং ইনডেক্স (index) কখনো মাইনাস বা ঋণাত্মক হতে পারে না। 
      // তাই C++ এর স্ট্যান্ডার্ড লাইব্রেরিতে arr.size() সব সময় একটি size_t টাইপের মান ফেরত পাঠায়।
        cout << arr[i];
        if (i != arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

// ---------------------------------------------------------
// Main Function
// ---------------------------------------------------------
int main() {
    Solution sol;

    // --- Test Case 1 ---
    cout << "Test Case 1:" << endl;
    vector<int> arr1 = {1, 4, 3, 2, 6, 5};
    cout << "Original Array: ";
    printArray(arr1);
    
    sol.reverseArray(arr1); // In-place reverse
    
    cout << "Reversed Array: ";
    printArray(arr1);
    cout << "--------------------------" << endl;

    // --- Test Case 2 ---
    cout << "Test Case 2:" << endl;
    vector<int> arr2 = {4, 5, 2};
    cout << "Original Array: ";
    printArray(arr2);
    
    sol.reverseArray(arr2);
    
    cout << "Reversed Array: ";
    printArray(arr2);
    cout << "--------------------------" << endl;

    // --- Test Case 3 ---
    cout << "Test Case 3:" << endl;
    vector<int> arr3 = {1};
    cout << "Original Array: ";
    printArray(arr3);
    
    sol.reverseArray(arr3);
    
    cout << "Reversed Array: ";
    printArray(arr3);

    return 0;
}
