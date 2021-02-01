#include <iostream>
using namespace std;

#include "solution.h"
//int pairSum(int *arr, int n) {
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
