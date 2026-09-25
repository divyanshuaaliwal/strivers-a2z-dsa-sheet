// URL: Not available

#include <bits/stdc++.h> 

int optimal(long long num) {
    int count = 0;
    while(num) {
        int digit = num % 10;
        count += (digit & 1);
        num /= 10;
    }
    return count;
}

int countOddDigits(long long x) {
    return optimal(x);
}
