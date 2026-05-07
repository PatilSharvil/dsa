#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e) {
        swap(arr[s++], arr[e--]);
    }
}

int main(int argc, char** args) { 
    vector<int> arr = {1,2,3,4,5,6,7};
    reverse(arr);
    for (auto val : arr) {
        cout << val << " "; 
    }

    return 0;
}