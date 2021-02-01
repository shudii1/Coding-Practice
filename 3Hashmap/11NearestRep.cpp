
#include <cmath>
#include <iostream>
using namespace std;
#include "solution.h"
//int minDistance(int arr[],int n){
int main() {
    	int n=0;
    	cin>>n;
    	int *arr = new int[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}

    	cout << minDistance(arr,n);


}
