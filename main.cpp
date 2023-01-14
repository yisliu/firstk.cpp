#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, k;
  // stack <int> str;
  vector <int> str;
  cin>>n>>k;
  for(int i = 0; i<n; i++){
    int temp;
    cin>>temp;
    str.push_back(temp);
  }
  sort(str.begin(), str.end());
  n--;
  for(int i = 0; i<k-1; i++, n--){
    cout<<str[n]<<" ";
  }
  cout<<str[n];
}

/*
5 3
4 3 2 4 5
*/