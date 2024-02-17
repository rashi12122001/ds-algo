// Difference Of Two Arrays
// Easy  Prev   Next
// 1. You are given a number n1, representing the size of array a1.
// 2. You are given n1 numbers, representing elements of array a1.
// 3. You are given a number n2, representing the size of array a2.
// 4. You are given n2 numbers, representing elements of array a2.
// 5. The two arrays represent digits of two numbers.
// 6. You are required to find the difference of two numbers represented by two arrays and print the arrays. a2 - a1

// Assumption - number represented by a2 is greater.
// Input Format
// A number n1
// n1 number of elements line separated
// A number n2
// n2 number of elements line separated
// Output Format
// A number representing difference of two numbers (a2 - a1), represented by two arrays.
// Question Video

//   COMMENTConstraints
// 1 <= n1, n2 <= 100
// 0 <= a1[i], a2[i] < 10
// number reresented by a1 is smaller than number represented by a2
// Sample Input
// 3
// 2
// 6
// 7
// 4
// 1
// 0
// 0
// 0
// Sample Output
// 7
// 3
// 3
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
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
	int m=max(n1,n2);
	int diff[m];
	int i=n1-1;
	int j=n2-1;
	int k=m-1;
	int c=0;
	while(k>=0){
		int d=0;
		int alv= i>=0? a1[i]:0;
		if(a2[j]+c>=alv){
		d= a2[j]+c-alv;
		c=0;	
		}
		else{
			d= a2[j]+c+10-alv;
			c=-1;
		}
		diff[k]=d;
		i--;
		j--;
		k--;
	}
	int idx =0;
	while(idx<m){
		if(diff[idx]==0){
			idx++;
		}
		else{
			break;
		}
	}
	while(idx<m){
		cout<<diff[idx]<<"\n";
		idx++;
	}

	return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   int n;
   int m;
   cin>>n;
   int arr1[n];
   for(int i=0;i<n;i++){
       cin>>arr1[i];
   }
   cin>>m;
   int arr2[m];
   for(int i=0;i<m;i++){
       cin>>arr2[i];
   }
   // 1 1 1 1 - 9 9 9
int diff[m];
int x=n-1,y=m-1;// y for 2 and x for 1
int carry=0;
   for(int i=m-1;i>=0;i--){
       int d=0;
       int var;
       if(x<0){
           var=0;
       }
       else{
           var=arr1[x];
       }
       
       if(arr2[y]-var<0){
           d=10+arr2[y]-var+carry;
           carry=-1;
       }
       else{
            d=arr2[y]-var+carry;
            carry=0;
       }
       diff[i]=d;
       x--;
       y--;
   }
   cout<<"answer is"<<endl;
   
int index=0;
for(int i=0;i<m;i++){
    if(diff[i]==0){
        index++;
    }
}
for(int i=index;i<m;i++){
    cout<<diff[i];
}
    return 0;
}
