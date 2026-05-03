#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int firstOccurance(vector<int> nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end) {
        if (target == nums[mid]) {
            if (mid != 0 && nums[mid - 1] < target) {
                return mid;
            } else if (mid == 0) {
                return mid;
            } else {
                end = mid - 1;
            }
        } else if (target > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    
    return -1;
}

int lastOccurance(vector<int> nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end) {
        if (target == nums[mid]) {
            if (mid != nums.size() - 1 && nums[mid + 1] > target) {
                return mid;
            } else if (mid == nums.size() - 1) {
                return mid;
            } else {
                start = mid + 1;
            }
        } else if (target > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    
    return -1;
}


int main() {

    //find the total number of occurences of an elements in a sorted array
    vector<int> nums = {1,2,3,3,5,5};
    int target = 3;
    cout << firstOccurance(nums, target) << endl;
    cout << lastOccurance(nums, target) << endl;

    cout <<"Total number of occurences of "<< target << " are : "<< (lastOccurance(nums, target) - firstOccurance(nums, target) + 1) << endl;
    return 0;
};