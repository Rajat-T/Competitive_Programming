#include <iostream>

using namespace std;

void printAllSubarrays(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << a[k] << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    int a[] = {2, 1, 5, 0, 9};
    printAllSubarrays(a, 5);
    return 0;
}
