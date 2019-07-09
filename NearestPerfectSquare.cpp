#include <bits/stdc++.h>

using namespace std;

int main() {
    int temp, ps1, ps2, n, i, d1, d2;
    float root;
    cin >> n;
    temp = n;
    if (floor(sqrt(n)) - ceil(sqrt(n)) == 0) {
        cout << "Number is already a perfect square\n";
        return 0;
    }
    while (1) {
        temp--;
        root = sqrt(temp);
        if (ceil(root) - floor(root) == 0) {
            ps1 = temp;
            d1 = temp - n;
            break;
        }
    }
    temp = n;
    while (1) {
        temp++;
        root = sqrt(temp);
        if (ceil(root) - floor(root) == 0) {
            ps2 = temp;
            d2 = n - temp;
            break;
        }
    }
    if (d1 > d2)
        cout << ps1 << endl;

    else
        cout << ps2 << endl;


    return 0;
}
