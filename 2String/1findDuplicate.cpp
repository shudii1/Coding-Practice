#include <iostream>
#include "solution.h"
using namespace std;
//int countPalindromeSubstrings(char s[])
int main() {
    char input[1000], output[1000];
    cin.getline(input, 1000);
    findLargestUniqueSubstring(input, output);
    cout << output << endl;
}
