
#include <iostream>
#include "solution.h"
using namespace std;
//void reverseStringWordWise(char s[])
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
