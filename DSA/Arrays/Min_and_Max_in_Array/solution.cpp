#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // প্রথম উপাদানটিকেই প্রাথমিকভাবে সর্বনিম্ন ও সর্বোচ্চ ধরে নেওয়া হচ্ছে
        int min_val = arr[0];
        int max_val = arr[0];
        
        // অ্যারের সাইজ একবার বের করে রাখা হচ্ছে
        int n = arr.size();
        
        // দ্বিতীয় উপাদান থেকে অ্যারেটি ট্রাভার্স করা হচ্ছে
        for(int i = 1; i < n; i++) {
            // যদি বর্তমান উপাদানটি min_val এর চেয়ে ছোট হয়, তবে min_val আপডেট হবে
            if(arr[i] < min_val) {
                min_val = arr[i];       
            }
            // যদি বর্তমান উপাদানটি max_val এর চেয়ে বড় হয়, তবে max_val আপডেট হবে
            else if(arr[i] > max_val) { 
                max_val = arr[i];          
            }
        }
        
        // ফলাফল হিসেবে {min, max} রিটার্ন করা হচ্ছে
        return {min_val, max_val};
    }
};

// ---------------------------------------------------------
// Main Function
// ---------------------------------------------------------
int main() {
    // Solution ক্লাসের অবজেক্ট তৈরি করা
    Solution sol;

    // --- Test Case 1 ---
    cout << "Test Case 1:" << endl;
    vector<int> arr1 = {1, 4, 3, 5, 8, 6};
    
    cout << "Input Array: ";
    for(int x : arr1) cout << x << " ";
    cout << endl;

    vector<int> result1 = sol.getMinMax(arr1);
    cout << "Output (Min, Max): [" << result1[0] << ", " << result1[1] << "]" << endl;
    cout << "--------------------------" << endl;

    // --- Test Case 2 ---
    cout << "Test Case 2:" << endl;
    vector<int> arr2 = {12, 3, 15, 7, 9};
    
    cout << "Input Array: ";
    for(int x : arr2) cout << x << " ";
    cout << endl;

    vector<int> result2 = sol.getMinMax(arr2);
    cout << "Output (Min, Max): [" << result2[0] << ", " << result2[1] << "]" << endl;

    return 0;
}
