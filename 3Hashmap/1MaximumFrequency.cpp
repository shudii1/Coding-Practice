#include <iostream>
#include<unordered_map>
using namespace std;
int highestFrequency(int arr[], int n) {
    int max=0,res=0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        //count frequency of each element in arr
        mp[arr[i]]++;
    }
    for(auto i:mp)
    {
         //check if current value>previous value
        if(i.second>res)
        {
            //res containing value
            res=i.second;
            //max containing key
            max=i.first;
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}
