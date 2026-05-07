#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &arr, vector<int> &arrr)
{
    vector<int> ans;

    int p1 = 0;
    int p2 = 0;

    while (p1 < arr.size() && p2 < arrr.size())
    {
        if (arr[p1] < arrr[p2])
        {
            ans.push_back(arr[p1++]);
        }
        else
        {
            ans.push_back(arrr[p2++]);
        }
    }

    while (p1 < arr.size())
    {
        ans.push_back(arr[p1++]);
    }

    while (p2 < arrr.size())
    {
        ans.push_back(arrr[p2++]);
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }
    return ans;
}

int main(int argc, char **args)
{
    vector<int> ans;
    vector<int> arr = {1, 3, 5, 7};
    vector<int> arrr = {2, 4, 6};
    ans = merge(arr, arrr);

    // for (auto val : ans) {
    //     cout << val << " ";
    // }
    return 0;
}