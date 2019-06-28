#include <bits/stdc++.h>

using namespace std;

void subsequence(char in[], char out[], int i, int j) {
    if (in[i] == '\0') {                //i-Input Pointer,j-Output Pointer
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    out[j] = in[i];
    subsequence(in, out, i + 1, j + 1);
    out[j] = '\0';
    subsequence(in, out, i + 1, j);
}

int main() {
    char in[100] = "abc";
    char out[100];

    subsequence(in, out, 0, 0);

    return 0;
}
