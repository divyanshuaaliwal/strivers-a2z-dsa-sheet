// URL: https://www.naukri.com/code360/problems/armstrong-number_1462443

#include <bits/stdc++.h> 
bool isArmstrong(int num) {

    int realNum = num;
    int armstrongNum = 0;
    int totalDigits = log10(num) + 1;

    while(num) {
        int lastDigit = num % 10;
        armstrongNum += pow(lastDigit, totalDigits);
        num /= 10;
    }
    
    return realNum == armstrongNum;
}