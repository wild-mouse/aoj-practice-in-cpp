#include <iostream>
#include <string>

using namespace std;

void printCurrent(string ss[], int n) {
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << ss[i];
    }
    cout << endl;
}

string* bubbleSort(string ss[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            int j1 = stoi(ss[j].substr(1));
            int j2 = stoi(ss[j + 1].substr(1));
            if (j1 > j2) {
                string tmp = ss[j];
                ss[j] = ss[j + 1];
                ss[j + 1] = tmp;
            }
        }
    }
    printCurrent(ss, n);
    return ss;
}

string* selectionSort(string ss[], int n) {
    for (int i = 0; i < n; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            int minv = stoi(ss[minj].substr(1));
            int v = stoi(ss[j].substr(1));
            if (v < minv) {
                minj = j;
            }
        }
        if (minj != i) {
            string tmp = ss[i];
            ss[i] = ss[minj];
            ss[minj] = tmp;
        }
    }
    printCurrent(ss, n);
    return ss;
}

bool isStable(string ss1[], string ss2[], int n) {
    for (int i = 0; i < n; i++) {
        if (ss1[i] != ss2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    string ss1[n];
    string ss2[n];
    for (int i = 0; i < n; i++) {
        cin >> ss1[i];
        ss2[i] = ss1[i];
    }
    string* ss3 = bubbleSort(ss1, n);
    cout << "Stable" << endl;
    string* ss4 = selectionSort(ss2, n);
    if (isStable(ss3, ss4, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}