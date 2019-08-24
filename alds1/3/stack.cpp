#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Stack {
public:
    void push(string s) {
        v.push_back(s);
    }

    string pop() {
        if (is_empty()) {
            cerr << "Stack is empty.";
        }
        string s = v[v.size() - 1];
        v.pop_back();
        return s;
    }

    bool is_empty() {
        return v.empty();
    }

private:
    vector<string> v = vector<string>();

};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string line, s, t;
    Stack st = Stack();
    getline(cin, line);
    stringstream x(line);
    while (getline(x, s, ' ')) {
        if (s == "+") {
            int n2 = stoi(st.pop());
            int n1 = stoi(st.pop());
            string ss = to_string(n1 + n2);
            st.push(ss);
        } else if (s == "-") {
            int n2 = stoi(st.pop());
            int n1 = stoi(st.pop());
            string ss = to_string(n1 - n2);
            st.push(ss);
        } else if (s == "*") {
            int n2 = stoi(st.pop());
            int n1 = stoi(st.pop());
            string ss = to_string(n1 * n2);
            st.push(ss);
        } else {
            st.push(s);
        }
    }
    cout << st.pop() << "\n";
}

