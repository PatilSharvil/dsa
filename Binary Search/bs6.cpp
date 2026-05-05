#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSqrt(int n) {
    long long s = 0;
    long long e = n;
    long long mid;

    while (s <= e) {
        mid = s + (e - s) / 2;

        long long square = mid * mid;

        if (square == n) {
            return mid;
        } 
        else if (square > n) {
            e = mid - 1;
        } 
        else {
            s = mid + 1;
        }
    }

    return e;  
}

int main() {
    cout << getSqrt(8);  
    return 0;
}