#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMinDiff(vector<int>& a, int m) {
        // যদি ছাত্রের সংখ্যা 0 হয় বা প্যাকেট না থাকে
        if (m == 0 || a.size() == 0) return 0;

        // প্রথমে array টা sort করি (ছোট থেকে বড়)
        sort(a.begin(), a.end());

        int n = a.size();
        int minDiff = INT_MAX;   // সবচেয়ে ছোট পার্থক্য রাখার জন্য

        // m সাইজের প্রতিটা window চেক করব
        // i হলো window এর শুরু
        for (int i = 0; i + m - 1 < n; i++) {
            // window এর শেষ index = i + m - 1
            int currentDiff = a[i + m - 1] - a[i];

            // যদি এই পার্থক্য আগের চেয়ে ছোট হয়, আপডেট করি
            if (currentDiff < minDiff) {
                minDiff = currentDiff;
            }
        }
        
        return minDiff;
    }


};

int main()
{
    Solution obj;

    vector<int> arr= {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;

    cout<<obj.findMinDiff(arr,m);

}
