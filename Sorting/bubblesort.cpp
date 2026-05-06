#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> sort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] >= arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    return arr;
}


int main(int argc, char** args) { 
    vector<int> arr = {9,5,7,8,6,4,1,2,3};
    sort(arr);

    for (auto val: arr) {
        cout << val << " ";
    }

    return 0;
}