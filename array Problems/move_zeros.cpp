#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void move(vector<int>& arr) {
    int i = 0;
    for (int j = 0; j < arr.size(); j++) {
        if (arr[j] != 0) {
            swap(arr[j], arr[i++]);
        }
    }
}

int main(int argc, char** args) { 
    vector<int> arr = {0,1,0,2,12,0};
    move(arr);

    for (auto val : arr) {
        cout << val << " ";
    }
    return 0;
}