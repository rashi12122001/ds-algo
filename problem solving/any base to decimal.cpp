// Any Base To Decimal
// Easy  Prev   Next
// 1. You are given a number n.
// 2. You are given a base b. n is a number on base b.
// 3. You are required to convert the number n into its corresponding value in decimal number system.
// Input Format
// A number n
// A base b
// Output Format
// A decimal number representing corresponding value of n in base b.
// Question Video

//   COMMENTConstraints
// 0 <= d <= 1000000000
// 2 <= b <= 10
  
// Sample Input
// 111001
// 2
// Sample Output
// 57
#include<bits/stdc++.h>
using namespace std;

int main(){
	// pep Approach
	int n,b,c=0,s=0;
	cin>>n;
	cin>>b;
	while(n){
		int r=n%10;
		s=r*int(pow(b,c))+s;
		n=n/10;
		c++;
	}
	cout<<s;
	return 0;
}