#include <iostream>

using namespace std;

int main() {
    int n, i, j, k;
    cin >> n;
    for (i = n; i <= (2 * n) - 1; i++) {
        k = n;
        if (i <= n) {
            for (j = 1; j <= (2 * n) - 1; j++) {
                cout << k << " ";
                if (i > j)
                    k--;

                if (i + j >= (2 * n))
                    k++;
            }
        }

        if (i > n) {
            for (j = 1; j <= (2 * n) - 1; j++) {
                cout << k << " ";
                if (i + j < (2 * n))
                    k--;

                if (j >= i)
                    k++;
            }
        }
        cout << "\n";
    }
    return 0;
}
