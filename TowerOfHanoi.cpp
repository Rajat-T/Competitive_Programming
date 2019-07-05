#include <iostream>

using namespace std;

void TOH(int n, char source, char temp, char dest) {
    if (n == 1) {
        cout << "Moving ring " << n << " from " << source << " to " << dest << endl;
        return;
    }
    TOH(n - 1, source, dest, temp);
    cout << "Moving ring " << n << " from " << source << " to " << dest << endl;
    TOH(n - 1, temp, source, dest);
}

int main() {
    int n;
    cin >> n;


    TOH(n, 'A', 'B', 'C');
    return 0;
}
