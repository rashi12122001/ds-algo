// Any Base To Any Base
// Easy  Prev   Next
// 1. You are given a number n.
// 2. You are given a base b1. n is a number on base b.
// 3. You are given another base b2.
// 4. You are required to convert the number n of base b1 to a number in base b2.
// Input Format
// A number n
// A base b1
// A base b2
// Output Format
// A number of base b2 equal in value to n of base b1.
// Question Video

//   COMMENTConstraints
// 0 <= n <= 512
// 2 <= b1 <= 10
// 2 <= b2 <= 10
// Sample Input
// 111001
// 2
// 3
// Sample Output
// 2010
#include<bits/stdc++.h>
using namespace std;
int BasetoD(int n , int b1){
	int s=0,c=0;
	while(n){
		int r=n%10;
		s=r*int(pow(b1,c))+s;
		n=n/10;
		c++;
	}
	return s;
}
void DtoBase(int s ,int b2){
	int c=0,p=0;
	while(s){
		int r=s%b2;
		p=r*int(pow(10,c))+p;
		s=s/b2;
		c++;
	}
	cout<<p;
	
}
int main(){
	int n,b1,b2;
	cin>>n;
	cin>>b1; cin>>b2;
	int s= BasetoD(n ,b1);
	DtoBase(s ,b2);
	
	
	return 0;
}
