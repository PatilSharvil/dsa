#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& arr) {

    for (int i = 1; i < arr.size(); i++) {
        int val = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > val) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = val;

    }


}


int main(int argc, char** args) { 
     vector<int> arr = {9,5,7,8,6,4,1,2,3};
    sort(arr);

    for (auto val: arr) {
        cout << val << " ";
    }
    
    return 0;
}