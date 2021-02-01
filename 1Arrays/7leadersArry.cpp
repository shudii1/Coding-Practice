#include<iostream>
#include<climits>
using namespace std;
#include"solution.h"
//void Leaders(int* arr,int len)
int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];

	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
