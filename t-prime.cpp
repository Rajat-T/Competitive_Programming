#include <iostream>
#include <math.h>

using namespace std;

int checkprime(long long int n) {
    long long int i;
    int flag = 0;

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag++;
            break;
        }
    }

    if (flag == 0)
        return 1;

    else
        return 0;
}

int main() {
    long long int n, flag = 0;
    cin >> n;
    if (n % 2 == 0 && n != 4)
        cout << "No\n";

    else {
        int r;
        double x;

        x = sqrt(n);

        if (ceil(x) - floor(x) == 0) {
            r = checkprime((long long int) x);
            if (r == 1)
                cout << "Yes\n";
        } else
            cout << "No\n";
    }
    return 0;
}

/*     Points to Remember

A number can be t-prime if it has only 3 divisors of which 2 are fixed i.e. 1 & the number itself.

So now remains only third number that can divide your number.

A number is t-prime if:-

1.)It is a Perfect Square.
2.)Its Square Root is a Prime Number.
3.)4 is the only even which is a t-prime.

*/
