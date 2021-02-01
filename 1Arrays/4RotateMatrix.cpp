
#include<iostream>
using namespace std;

//void rotate(int **input, int n){

void rotate(int **input, int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Taking input and printing output is handled automatically.
     */
    int temp;
    for(int i = 0; i < n/2; i++) {
        for(int j = i; j < n-i-1; j++) {
            temp=input[i][j];
            input[i][j]=input[j][n-i-1];
            input[j][n-i-1]=input[n-i-1][n-j-1];
            input[n-i-1][n-j-1]=input[n-j-1][i];
            input[n-j-1][i]=temp;

        }
    }
}

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
