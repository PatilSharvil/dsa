#include <iostream>
#include <bits\stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int target) {

    int start = 0, end = nums.size() - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end) {
        if (nums[mid] == target) {
            return mid;
        } else if (target > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }

    return -1;
}
// 1 2 3 4 5 6 7 8 9
int main() {

    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    cout << binarySearch(nums, 1) << endl;

    return 0;
}