// Reverse An Array
// Easy  Prev   Next
// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to reverse the contents of array a.
// Input Format
// Input is managed for you
// Output Format
// Output is managed for you
// Question Video

//   COMMENTConstraints
// 0 <= n < 10^4
// -10^9 <= a[i] <= 10^9
// Sample Input
// 5
// 1
// 2
// 3
// 4
// 5
// Sample Output
// 5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n;
	cin>>n;
	long int a[n],b[n];
	for(long int i=0;i<n;i++){
		cin>>a[i];
	}
	long int j=0;
	for(long int i=n-1;i>=0;i--){
		b[j]=a[i];
		j++;
	}
	for(long int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
	
	return 0;
}