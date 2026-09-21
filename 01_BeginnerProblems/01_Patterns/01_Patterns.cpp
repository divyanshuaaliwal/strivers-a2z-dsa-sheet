#include<iostream>
using namespace std;

void pattern_01(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= n ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_02(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_03(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_04(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << i;
        }
        cout << endl;
    }
}

void pattern_05(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= n-i+1 ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_06(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= n-i+1 ; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern_07(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int space = 1; space <= n-i ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= 2*i-1 ; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_08(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int space = 1; space <= i-1 ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= 2*n-2*i+1 ; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_09(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int space = 1; space <= n-i ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= 2*i-1 ; star++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1 ; i <= n ; i++) {
        for(int space = 1; space <= i-1 ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= 2*n-2*i+1 ; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_10(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int star = 1; star <= i ; star++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1 ; i <= n - 1 ; i++) {
        for(int star = 1; star <= n-i ; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_11(int n) {
    for(int i = 1 ; i <= n ; i++) {
        bool value = i & 1;
        for(int j = 1; j <= i ; j++) {
            cout << value << " ";
            value = (value == 0 ? 1 : 0);
        }
        cout << endl;
    }
}

void pattern_12(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << j;
        }
        for(int space = 1 ; space <= 2*n-2*i ; space++) {
            cout << " ";
        }
        for(int j = 1; j <= i ; j++) {
            cout << i-j+1;
        }
        cout << endl;
    }
}

void pattern_13(int n) {
    int count = 1;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << count << " ";
            count += 1;
        }
        cout << endl;
    }
}

void pattern_14(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << char('A'+j-1);
        }
        cout << endl;
    }
}

void pattern_15(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= n-i+1 ; j++) {
            cout << char('A'+j-1);
        }
        cout << endl;
    }
}

void pattern_16(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << char('A'+i-1);
        }
        cout << endl;
    }
}

void pattern_17(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int space = 1; space <= n-i ; space++) {
            cout << " ";
        }
        for(int j = 1; j <= i ; j++) {
            cout << char('A'+j-1);
        }
        for(int j = 1; j <= i-1 ; j++) {
            cout << char('A'+i-j-1);
        }
        cout << endl;
    }
}

void pattern_18(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << char('A'+n-i+j-1);
        }
        cout << endl;
    }
}

void pattern_19(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int star = 1; star <= n-i+1 ; star++) {
            cout << "*";
        }
        for(int space = 1; space <= 2*i-2 ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= n-i+1 ; star++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1 ; i <= n ; i++) {
        for(int star = 1; star <= i ; star++) {
            cout << "*";
        }
        for(int space = 1; space <= 2*n-2*i ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= i ; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_20(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int star = 1; star <= i ; star++) {
            cout << "*";
        }
        for(int space = 1; space <= 2*n-2*i ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= i ; star++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 1 ; i <= n ; i++) {
        for(int star = 1; star <= n-i+1 ; star++) {
            cout << "*";
        }
        for(int space = 1; space <= 2*i-2 ; space++) {
            cout << " ";
        }
        for(int star = 1; star <= n-i+1 ; star++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern_21(int n) {
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1; j <= n ; j++) {
            cout << ((i == 1 || i == n || j == 1 || j == n) ? "*" : " ");
        }
        cout << endl;
    }
}

void pattern_22(int n) {
    for(int i = 1 ; i <= 2*n-1 ; i++) {
        for(int j = 1; j <= 2*n-1 ; j++) {
            cout << n - min(min(i, j), min(2*n-i, 2*n-j)) + 1<< " ";
        }
        cout << endl;
    }
}

int main() {
    
    int n = 5;

    pattern_01(n); cout << endl;
    pattern_02(n); cout << endl;
    pattern_03(n); cout << endl;
    pattern_04(n); cout << endl;
    pattern_05(n); cout << endl;
    pattern_06(n); cout << endl;
    pattern_07(n); cout << endl;
    pattern_08(n); cout << endl;
    pattern_09(n); cout << endl;
    pattern_10(n); cout << endl;
    pattern_11(n); cout << endl;
    pattern_12(n); cout << endl;
    pattern_13(n); cout << endl;
    pattern_14(n); cout << endl;
    pattern_15(n); cout << endl;
    pattern_16(n); cout << endl;
    pattern_17(n); cout << endl;
    pattern_18(n); cout << endl;
    pattern_19(n); cout << endl;
    pattern_20(n); cout << endl;
    pattern_21(n); cout << endl;
    pattern_22(n); cout << endl;

    return 0;
}