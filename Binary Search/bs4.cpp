#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int search(vector<int> arr, int target) {
    int start = 0, end = arr.size() - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end) {
        if (arr[mid] == target) {
            return mid;
        }

        if (arr[start] <= arr[mid]) {
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        

        mid = start + ((end - start) / 2);
    }

    return -1;
}


int main(int argc, char** args) { 
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    
    cout << search(arr, target) << endl;

    return 0;
}