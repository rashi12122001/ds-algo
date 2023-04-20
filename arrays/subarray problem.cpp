// Subarray Problem
// Easy  Prev   Next
// 1. You are given an array of size 'n' and n elements of the same array.
// 2. You are required to find and print all the subarrays of the given array. 
// 3. Each subarray should be space seperated and on a seperate lines. Refer to sample input and output.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// Output Format
// [Tab separated elements of subarray]
// ..
// All subarrays
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10
// 0 <= n1, n2
//  .. n elements <= 10 ^9
// Sample Input
// 3
// 10
// 20
// 30
// Sample Output
// 10	
// 10	20	
// 10	20	30	
// 20	
// 20	30	
// 30	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int s=i;
		while(s<n){
			for(int j=i;j<=s;j++){
				cout<<a[j]<<"	";
			}
			s++;
			cout<<"\n";
		}
	}
	return 0;
}