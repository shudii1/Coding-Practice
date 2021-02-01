
#include<iostream>
using namespace std;
#include "solution.h"
//bool subArrayZeroSum(int arr[], int n) {
int main()
{
    int n;
    int input[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    bool val = subArrayZeroSum(input, n);
    if(val)
    {
        cout<<"true";
    }
    else
    {
            cout<<"false";
    }
    return 0;
}

