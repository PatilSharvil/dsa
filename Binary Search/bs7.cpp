#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int student_count = 1;
    int pageSum = 0;
    for (auto val : arr) {
        if (pageSum + val <= mid) {
            pageSum += val;
        } else {
            student_count++;
            if (student_count > m || val > mid) {
                return false; 
            }
            pageSum = val;

        }
    }

    return true;
}

int allocate(vector<int> arr, int n, int m) {

    int ans = -1;
    int range = accumulate(arr.begin(), arr.end(), 0);

    int s = 0;
    int e = range;
    int mid = s + (e - s) / 2;

    while (s <= e) {

        if (isPossible(arr, n, m, mid)) {
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
    vector<int> books = {10, 20, 30, 40};
    cout << allocate(books, 4, 2);
    
    return 0;
}