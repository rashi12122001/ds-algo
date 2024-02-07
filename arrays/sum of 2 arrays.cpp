// sum Of Two Arrays
// Easy  Prev   Next
// 1. You are given a number n1, representing the size of array a1.
// 2. You are given n1 numbers, representing elements of array a1.
// 3. You are given a number n2, representing the size of array a2.
// 4. You are given n2 numbers, representing elements of array a2.
// 5. The two arrays represent digits of two numbers.
// 6. You are required to add the numbers represented by two arrays and print the
// arrays.
// Input Format
// A number n1
// n1 number of elements line separated
// A number n2
// n2 number of elements line separated
// Output Format
// A number representing sum of two numbers, represented by two arrays.
// Question Video

//   COMMENTConstraints
// 1 <= n1, n2 <= 100
// 0 <= a1[i], a2[i] < 10
// Sample Input
// 5
// 3
// 1
// 0
// 7
// 5
// 6
// 1
// 1
// 1
// 1
// 1
// 1
// Sample Output
// 1
// 4
// 2
// 1
// 8
// 6
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2,d=0;
	cin>>n1;
	int a1[n1];
	for(int i=0;i<n1;i++){
		cin>>a1[i];
	}
	cin>>n2;
	int a2[n2];
	for(int i=0;i<n2;i++){
		cin>>a2[i];
	}
	int x= max(n1,n2);
  int sum[x];
	int c=0;
	int i= n1-1,j=n2-1,k=x-1;
	while(k>=0){
		int d=c;
		if(i>=0){
			d+=a1[i];
		}
		if(j>=0){
			d+=a2[j];
		}
		c=d/10;
		d=d%10;
		sum[k]=d;
		i--;
		j--;
		k--;
		
	}
	if(c!=0){
		cout<<c<<"\n";
	}
	for(int i=0;i<x;i++){
		cout<<sum[i]<<"\n";
	}
	return 0;
}




// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n,m;
 cin>>n;
 int arr[n];
    cout<<"hi"<<endl;
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"enter 2nd "<<endl;
cin>>m;
int arr1[m];
 for(int j=0;j<m;j++){
     cin>>arr1[j];
 }
 int large=(n>m)?n:m;
 int sum[large];
 int k=n-1;
 int l=m-1;
 int carry=0;
 for(int i=large-1;i>=0;i--){
     sum[i]=carry;
  if(k>=0){
      sum[i]=sum[i]+arr[k];
  }
  if(l>=0){
      sum[i]=sum[i]+arr1[l];
  }
     carry=sum[i]/10;
     sum[i]=sum[i]%10;
     k--;
     l--;
 }
 if(carry!=0){
     cout<<carry;
 }
 for(int i=0;i<large;i++){
     cout<<sum[i]<<" ";
 }
 
    return 0;
}
