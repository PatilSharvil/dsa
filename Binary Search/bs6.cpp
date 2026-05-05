#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSqrt(int n) {
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;

    while (s <= e) {

        if ((mid * mid) == n) {
            return mid;
        } else if ((mid * mid) > n) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return s;
}

int main(int argc, char** args) { 
    cout << getSqrt(121);
    
    return 0;
}