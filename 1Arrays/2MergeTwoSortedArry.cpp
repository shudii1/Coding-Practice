#include <iostream>
#include "solution.h"
using namespace std;
//void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
int main() {
    char input[1000], output[1000];
    cin.getline(input, 1000);
    findLargestUniqueSubstring(input, output);
    cout << output << endl;
}
