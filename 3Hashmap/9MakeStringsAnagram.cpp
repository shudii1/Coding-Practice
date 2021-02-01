#include <cmath>
#include <iostream>
using namespace std;
#include "solution.h"
//int makeAnagram(char str1[], char str2[]){
int main() {
    char str1[10010], str2[10010];
    cin>>str1;
    cin>>str2;

    cout << makeAnagram(str1,str2) << endl;

}
