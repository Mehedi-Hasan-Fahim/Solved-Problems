#include <bits/stdc++.h>   // সব header একসাথে নিয়ে আসে
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;          // empty set তৈরি করলাম

        for (int num : nums) {            // প্রতিটা সংখ্যা ঘুরে দেখছি
            if (seen.count(num) == 1) {   // আগে থেকেই আছে কিনা চেক
                return true;              // থাকলে সঙ্গে সঙ্গে true
            }
            seen.insert(num);             // না থাকলে set এ ঢুকিয়ে দিলাম
        }
        return false;                     // কোনো duplicate না পেলে false
    }
};

int main() {
    Solution sol;
    vector<int> number = {1, 2, 4, 1};    // test case

    // true হলে 1, false হলে 0 print হবে
    cout << sol.containsDuplicate(number) << endl;

    return 0;
}
