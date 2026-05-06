#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        int min = i;
        for (int j = i; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(arr[min], arr[i]);
        }
    }

}

int main(int argc, char** args) { 
    
    vector<int> arr = {9,5,6,8,7,4,3,2,1};
    sort(arr);

    for (auto val : arr) {
        cout << val << endl;
    }
    return 0;
}