#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int k, int mid) {
    int painters = 1;
    int cost = 0;
    for (auto val : arr) {
        if (cost + val <= mid) {
            cost += val;
        } else {
            painters++;
            if (painters > k || val > mid) {
                return false;
            }
            cost = val;
        }
    }

    return true;
}

int painterPartitioning(vector<int> arr, int k) {
    int s = 0;
    int e = accumulate(arr.begin(), arr.end(), 0);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {

        if (isPossible(arr, k, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }


        mid = s + (e - s) / 2;
    }

    return ans;
    
}


int main(int argc, char** args) { 
    vector<int> arr = {5,5,5,5};
    cout << painterPartitioning(arr, 2) << endl;
    
    return 0;
}