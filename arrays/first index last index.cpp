// First Index And Last Index
// Easy  Prev   Next
// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.

// Asssumption - Array is sorted. Array may have duplicate values.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// A number d
// Output Format
// A number representing first index
// A number representing last index
// Question Video

//   COMMENTConstraints
// 1 <= n <= 1000
// 1 <= n1, n2, .. n elements <= 100
// 1 <= d <= 100
// Sample Input
// 15
// 1
// 5
// 10
// 15
// 22
// 33
// 33
// 33
// 33
// 33
// 40
// 42
// 55
// 66
// 77
// 33
// Sample Output
// 5
// 9
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,flag=0,d;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>d;
	int first_element=-1;
	int second_element=-1;
	for(int i=0;i<n;i++){
		if(d==a[i] && flag==0){
		 first_element=i;
		 flag=1;
		}
		else if(d==a[i] && d!=a[i+1]){
			second_element =i;
		}
	}
	if(second_element == -1){
		cout<<first_element<<"\n"<<first_element;
	}
	else{
		cout<<first_element<<"\n"<<second_element;
	}
	
	return 0;
}
