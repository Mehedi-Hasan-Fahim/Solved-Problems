#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
 int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        // Step 1: প্রয়োজনীয় ভেরিয়েবলগুলো
        int currentSum = nums[0];
        int maxSum = nums[0];

        int start = 0;        // সবচেয়ে ভালো subarray-এর শুরু
        int end = 0;          // সবচেয়ে ভালো subarray-এর শেষ
        int tempStart = 0;    // অস্থায়ী শুরু (নতুন করে শুরু করলে)

        // Step 2: দ্বিতীয় element থেকে লুপ
        for(int i = 1; i < n; i++) {

            // যদি আগের sum নেগেটিভ হয়, তাহলে নতুন করে শুরু
            if(currentSum < 0) {
                currentSum = nums[i];
                tempStart = i;          // নতুন শুরুর জায়গা মনে রাখলাম
            } else {
                currentSum = currentSum + nums[i];
            }

            // যদি নতুন sum বড় হয়, তাহলে maxSum এবং index আপডেট
            if(currentSum > maxSum) {
                maxSum = currentSum;
                start = tempStart;      // শুরুর index সেভ
                end = i;                // শেষের index সেভ
            }
        }

        cout << "Subarray: ";
        for(int i = start; i <= end; i++) {
             cout << nums[i] << " ";
         }
        cout<<endl;

        return maxSum;
}
void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}
};

int main(){
    Solution sol;
    // --- Test Case 1 ---
    cout<<"Test Case 1:"<<endl;
    vector<int> arr1 ={-2,1,-3,4,-1,2,1,-5,4};
    cout<< "Original Array:";
    sol.printArray(arr1);
    int result=sol.maxSubArray(arr1);
    cout<<"Value:"<<result;
}

