#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, i = 1, sum = 0;
    float f;

    cin >> n;

    while (1) {
        f = n / pow(5, i);
        if (f <= 0)
            break;

        f = floor(f);
        sum = sum + f;
        i++;
    }

    cout << "Number of Trailing Zeroes : " << sum << endl;

    return 0;

}
