#include <iostream>
// #include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    int n, k, nFact, kFact, n_kFact, k_comb;
    int factorial(int);

    cout << "Anna n ja k: (n >= k): " << endl;
    cin >> n >> k;

    nFact = factorial(n);
    // nFact = 1;
    // for (int i = 1; i <= n; i++) {
    //     nFact *= i;
    // }
    kFact = factorial(k);
    // kFact = 1;
    // for (int i = 1; i <= k; i++) {
    //     kFact *= i;
    // }
    n_kFact = factorial(n-k);
    // n_kFact = 1;
    // for (int i = 1; i <= n-k; i++) {
    //     n_kFact *= i;
    // }

    k_comb = nFact / ( kFact * n_kFact );
    cout << n << " choose " << k << " is " << k_comb << endl;
    return 0;
}


int factorial(int num) {
    int factRes, i;

    factRes = 1;
    for (int i = 1; i <= num; i++)
    factRes *= i;

    return factRes;
}
