// All Indices Of Array
// Easy  Prev   Next
// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are given a number x. 
// 4. You are required to find the all indices at which x occurs in array a.
// 5. Return an array of appropriate size which contains all indices at which x occurs in array a.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// A number x
// Output Format
// Return the array of indices from the allIndices function. Display is managed for you.
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^4
// 0 <= n1, n2, .. n elements <= 10 ^ 3
// 0 <= x <= 10 ^ 3
// Sample Input
// 6
// 15
// 11
// 40
// 4
// 4
// 9
// 4
// Sample Output
// 3
// 4
#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
vector<int> temp;
vector<int> allIndex(vector<int>& arr, int idx, int data,int n)
{ 
    if(idx<n){
    if(arr[idx]==data){
        ans.push_back(idx);
    }
    temp=allIndex(arr,idx+1,data,n);
}
return ans;
}

int main() {
  int n ;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    arr.push_back(d);
  }
  int data;
  cin >> data;
  vector<int> ans = allIndex(arr, 0, data,n);
  int m=ans.size();
  if (ans.size() == 0) {
    cout <<endl;
    return 0;
  }
  for(int i=0;i<m;i++){
      cout<<ans[i]<<endl;
  }
//   for (int ele : ans) cout << ele << endl;

  return 0;
}