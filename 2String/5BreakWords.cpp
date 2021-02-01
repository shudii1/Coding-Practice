#include<iostream>
#include<string.h>
using namespace std;
//void breakWords(char* S)
#include"solution.h"
int main()
{
	char str[100000];
	cin.getline(str,100000);
	breakWords(str);
	cout<<str;
}
