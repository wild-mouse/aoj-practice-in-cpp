#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int a) {
    if (a == 2) {
        return true;
    }
    if (a % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= (int)sqrt(a); i = i + 2) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int c = 0;
    while(n--) {
        int a;
        cin >> a;
        if (isPrime(a)) {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}