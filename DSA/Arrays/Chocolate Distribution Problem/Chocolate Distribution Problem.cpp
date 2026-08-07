#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMinDiff(vector<int>& a,int m)
    {

        if(m==0 || a.size()==0)
            return 0;

        sort(a.begin(),a.end());

        int s = a.size();
        int minDiff = INT_MAX;

        for(int i=0; i+m-1<s; i++)
        {
            int currentDiff = a[i+m-1] - a[i];
            if(currentDiff < minDiff)
            {
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
