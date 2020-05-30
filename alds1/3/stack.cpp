#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

struct Stack {
    vector<int> vc;

    void push(int s) {
        vc.push_back(s);
    }

    int pop() {
        int ss = vc.back();
        vc.pop_back();
        return ss;
    }

    bool isEmpty() {
        return vc.empty();
    }
};

int main() {
    Stack st;

    string s, t;
    getline(cin, t);
    stringstream ss(t);

    while (getline(ss, s, ' ')) {
        if (s == "\n") {
            break;
        }
        if (s == "+") {
            int v1 = st.pop();
            int v2 = st.pop();
            st.push(v2 + v1);
        } else if (s == "-") {
            int v1 = st.pop();
            int v2 = st.pop();
            st.push(v2 - v1);
        } else if (s == "*") {
            int v1 = st.pop();
            int v2 = st.pop();
            st.push(v2 * v1);
        } else {
            st.push(stoi(s));
        }
    }

    cout << st.pop() << endl;

    return 0;
}