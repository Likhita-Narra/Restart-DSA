#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag = true;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) flag = false;
        else flag = true;
        for(int j = 1; j <= i; j++) {
            if (flag) {
                cout << "1 ";
                flag = false;
            }
            else {
                cout << "0 ";
                flag = true;
            }
        }
        cout << endl;
    }
}