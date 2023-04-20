// Any Base Subtraction
// Easy  Prev   Next
// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to subtract n1 from n2 and print the value.
// Input Format
// A base b
// A number n1
// A number n2
// Output Format
// A number of base b equal in value to n2 - n1.
// Question Video

//   COMMENTConstraints
// 2 <= b <= 10
// 0 <= n1 <= 256
// n1 <= n2 <= 256
// Sample Input
// 8
// 1
// 100
// Sample Output
// 77
#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,n1,n2,rv=0,c=0,p=1,flag=0;
	cin>>b;
	cin>>n1;
	cin>>n2;
	while(n1>0 || n2>0){
		int d1=n1%10;
		int d2 = n2%10;
		if(flag==1){
			d2--;
		}
		n1=n1/10;
		n2=n2/10;
		int d = d2-d1;
		if(d<0){
			d+=b;
			flag=1;
		}
		else{
			flag=0;
		}
		rv+= d*p;
		p=p*10;
	}
	cout<<rv;
	return 0;
}
