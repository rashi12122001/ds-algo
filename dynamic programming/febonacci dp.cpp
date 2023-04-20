// Fibonacci-dp
// Easy  Prev   Next
// 1. You are given a number n.
// 2. You are required to print the nth element of fibonnaci sequence.

// Note -> Notice precisely how we have defined the fibonnaci sequence
// 0th element -> 0
// 1st element -> 1
// 2nd element -> 1
// 3rd element -> 2
// 4th element -> 3
// 5th element -> 5
// 6th element -> 8
// Input Format
// A number n
// Output Format
// A number representing the nth element of fibonnaci sequence
// Question Video

//   COMMENTConstraints
// 0 <= n <= 45
// Sample Input
// 10
// Sample Output
// 55
#include <iostream>
using namespace std;

int fib(int n,int* arr){
    // write your code here
    if(n==0 || n==1){
        return n;
    }
    if(arr[n]!=0){
        return arr[n];
    }
    int fib1=fib(n-1,arr);
    int fib2=fib(n-2,arr);
    int ffib=fib1+fib2;
    arr[n]=ffib;
    return ffib;
}

int main(){
    int n;
    cin>>n;
    int* arr=new int[n+1];
    arr[n+1]={0};
    int ans=fib(n,arr);
    cout<<ans<<endl;
    delete []arr;
    return 0;
}