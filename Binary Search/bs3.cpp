#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int peak(vector<int> nums) {
    int start = 0, end = nums.size() - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end) {

        if (nums[mid + 1] < nums[mid] && nums[mid - 1] < nums[mid]) {
                return mid;
        } else if (nums[mid + 1] > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    
    
    return -1;
}

int main() {
    vector<int> nums = {0, 1, 2, 10, 5, 2};
    cout << peak(nums);

    return 0;
}
    
