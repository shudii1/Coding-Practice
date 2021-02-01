#include <iostream>
#include "solution.h"
using namespace std;
//void findLargestUniqueSubstring(char input[], char output[]){
int main() {
    char input[1000], output[1000];
    cin.getline(input, 1000);
    findLargestUniqueSubstring(input, output);
    cout << output << endl;
}
