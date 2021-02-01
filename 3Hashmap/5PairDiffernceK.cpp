
#include <iostream>
using namespace std;
//int getPairsWithDifferenceK(int *arr, int n, int k) {
#include "solution.h"

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}
