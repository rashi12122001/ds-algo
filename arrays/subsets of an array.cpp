// Subsets Of Array
// Easy  Prev   Next
// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to print all subsets of arr. Each subset should be
// on separate line. For more clarity check out sample input and output.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// Output Format
// [Tab separated elements of subset]
// ..
// All subsets
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10
// 0 <= n1, n2, .. n elements <= 10^3
// Sample Input
// 3
// 10
// 20
// 30
// Sample Output
// -	-	-	
// -	-	30	
// -	20	-	
// -	20	30	
// 10	-	-	
// 10	-	30	
// 10	20	-	
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int limit = int(pow(2,n));
	for(int i=0;i<limit;i++){
		string set="";
		int temp=i;
		for(int j=n-1;j>=0;j--){
			int r= temp%2;
			temp = temp/2;
			
			if(r==0){
				set="-	"+set;
			}
			else{
				string str = to_string(a[j]);
				set=str+"	"+set;
			}
		}
		cout<<set<<"\n";
	}
	return 0;
}