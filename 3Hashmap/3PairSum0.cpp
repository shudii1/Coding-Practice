#include <iostream>
#include<unordered_map>
using namespace std;

int pairSum(int *arr, int n) {
  unordered_map<int,int>mp;
  int pairCnt=0;
  for(int i=0;i<n;i++)
  {
      int complement=-arr[i];
      if(mp.find(complement)!=mp.end())
      {
          pairCnt+=mp[complement];
      }
      mp[arr[i]]++;
  }
  return pairCnt;

}
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
