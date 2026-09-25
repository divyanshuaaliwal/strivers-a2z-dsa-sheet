// URL: https://www.naukri.com/code360/problems/number-of-digits_4538242

#include <bits/stdc++.h> 

int bruteForce(long long num) {
    int count = 0;
    while(num) {
        count += 1;
        num /= 10;
    }
    return count;
}

int optimal(long long num) {
    return (log10(num) + 1);
}


int countDigits(long long x) {
    // return bruteForce(x);
    return optimal(x);
}
