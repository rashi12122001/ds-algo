// Decimal To Any Base
// Easy  Prev   Next
// 1. You are given a decimal number n.
// 2. You are given a base b.
// 3. You are required to convert the number n into its corresponding value in base b.
// Input Format
// A number n
// A base b
// Output Format
// A number representing corresponding value of n in number system of base b
// Question Video

//   COMMENTConstraints
// 0 <= d <= 512
// 2 <= b <= 10
  
// Sample Input
// 57
//  2
// Sample Output
// 111001
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,b,s=0,rev=0,c=0;
	cin>>n;
	cin>>b;
	if(b>=2 && b<=10){
		while(n){
		int r=n%b;
		s=s*10+r;
		n=n/b;
		c++;
		
	}
}
while(s){
	int r=s%10;
	rev=rev*10+r;
	s=s/10;
	c--;
}
if(c==0){
	cout<<rev;
}
else{
	cout<<rev;
	while(c){
		cout<<"0";
		c--;
	}
}
	
	return 0;
}