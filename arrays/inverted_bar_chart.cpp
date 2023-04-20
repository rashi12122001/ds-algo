// Inverted Bar Chart
// Easy  Prev   Next
// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to print an inverted bar chart representing value of arr a.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// Output Format
// An inverted bar chart of asteriks representing value of array a
// Question Video

// Constraints
// 1 <= n <= 30
// 0 <= n1, n2, .. n elements <= 10
// Sample Input
// 5
// 3
// 1
// 0
// 7
// 5
// Sample Output
// *	*		*	*	
// *			*	*	
// *			*	*	
// 			*	*	
// 			*	*	
// 			*		
// 			*	
#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max=arr[0];
    
   for(int i=0;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
       }
   }
  for(int i=0;i<max;i++){
      for(int j=0;j<n;j++){
          if(i<arr[j]){
              cout<<'*'<<'	';
          }
          else{
              cout<<'	';
          }
      }
      cout<<endl;
      
  }
  //write your code here


}