// Rotate An Array
// Easy  Prev   Next
// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are given a number k.
// 4. Rotate the array a, k times to the right (for positive values of k), and to
// the left for negative values of k.
// Input Format
// Input is managed for you
// Output Format
// Output is managed for you
// Question Video

//   COMMENTConstraints
// 0 <= n < 10^4
// -10^9 <= a[i], k <= 10^9
// Sample Input
// 5
// 1
// 2
// 3
// 4
// 5
// 3
// Sample Output
// 3 4 5 1 2
#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int i, int j){
	int li=i;
	int ri=j;
	while(li<ri){
		int temp=a[li];
		a[li]=a[ri];
		a[ri]=temp;
		li++;
		ri--;
	}
	
}
void rotate(int a[],int k,int n){
	k= k%n;
	if(k<0){
		k=k+n;
	}
	// part 1
	reverse(a,0,n-k-1);
	// part 2
	reverse(a,n-k,n-1);
	// part 3
	reverse(a,0,n-1);
}

int main(){
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	rotate(a,k,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}