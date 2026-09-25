// URL: Not available

#include <bits/stdc++.h> 

int optimal(long long num) {
    int largestDigit = 0;
    while(num) {
        int digit = num % 10;
        largestDigit = max(largestDigit, digit);
        num /= 10;
    }
    return largestDigit;
}

int LargestDigit(long long x) {
    return optimal(x);
}
