#include <bits/stdc++.h>
using namespace std;

bool esPrimo(int n) {

    if (n == 1 )
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
      return true;
}

int main() {
    cin>> int n ;
    for (int i = 1; i <= n; i++) {
        if (esPrimo(i))
            cout << i << " ";
    }
    return 0;
}
