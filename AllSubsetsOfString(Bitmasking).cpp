#include <bits/stdc++.h>

using namespace std;

void filterChars(char *a, int no) {
    int i = 0;
    while (no > 0) {
        if ((no & 1) == 1)
            cout << a[i];
        else
            cout << "";

        i++;

        no = no >> 1;
    }
}

void generateSubsets(char *a) {
    int n = strlen(a);
    int range = (1 << n) - 1;

    for (int i = 0; i <= range; i++) {
        filterChars(a, i);
        cout << "\n";
    }
}

int main() {
    int n, i;
    char a[100];

    cin >> a;

    generateSubsets(a);

    return 0;
}
