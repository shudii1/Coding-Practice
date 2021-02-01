#include<iostream>
using namespace std;
#include"solution.h"
//int platformsNeeded(int arrival[], int departure[], int n) {
int main()
{
	int n;
	cin>>n;
    int* arr=new int[n];
    int* dep=new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(int i=0;i<n;i++)
    {
    	cin>>dep[i];
	}
    cout<< platformsNeeded(arr, dep, n);
}
