// Any Base Addition
// Easy  Prev   Next
// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to add the two numbes and print their value in base b.
// Input Format
// A base b
// A number n1
// A number n2
// Output Format
// A number representing the sum of n1 and n2 in base b.
// Question Video

//   COMMENTConstraints
// 2 <= b <= 10
// 0 <= n1 <= 256
// 0 <= n2 <= 256
// Sample Input
// 8
// 777
// 1
// Sample Output
// 1000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,n1,n2,rv=0,c=0,p=1;
	cin>>b;
	cin>>n1;
	cin>>n2;
	while(n1>0 || n2>0|| c>0){
		int d1=n1%10;
		int d2 = n2%10;
		n1=n1/10;
		n2=n2/10;
		int d = d1+d2+c;
		c=d/b;
		d=d%b;
		rv+= d*p;
		p=p*10;
	}
	cout<<rv;
	return 0;
}