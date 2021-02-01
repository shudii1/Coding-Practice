
#include<iostream>
using namespace std;
#include "Solution.h"
//void rotate(int **input, int n){
int main() {
    int n;
    cin >> n;

    int **input = new int*[n];

    for(int i = 0; i < n; i++) {
        input[i] = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }

    rotate(input, n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}
