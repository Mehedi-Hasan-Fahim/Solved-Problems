#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;   // overflow এড়ানোর জন্য

            // যদি mid এ target পেয়ে যাই
            if (nums[mid] == target) {
                return mid;
            }

            // বাম দিকটা sorted কিনা চেক করি
            if (nums[left] <= nums[mid]) {
                // target কি বাম sorted অংশে আছে?
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;   // বামে যাই
                } else {
                    left = mid + 1;    // ডানে যাই
                }
            }
            // ডান দিকটা sorted
            else {
                // target কি ডান sorted অংশে আছে?
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;    // ডানে যাই
                } else {
                    right = mid - 1;   // বামে যাই
                }
            }
        }

        // খুঁজে না পেলে
        return -1;
    }
};

int main(){
Solution obj;

vector<int> arr ={4, 5, 6, 7, 0, 1, 2};
int target = 1;
cout<<obj.search(arr,target);

}
