// First Index
// Easy  Prev   Next
// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are given a number x. 
// 4. You are required to find the first index at which x occurs in array a.
// 5. If x exists in array, print the first index where it is found otherwise print -1.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// A number x
// Output Format
// A number representing first index of occurence of x in array a or -1 if not found at all.
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^4
// 0 <= n1, n2, .. n elements <= 10 ^ 3
// 0 <= x <= 10 ^ 3
// Sample Input
// 6
// 15
// 11
// 40
// 4
// 4
// 9
// 4
// Sample Output
// 3
#include<iostream>
using namespace std;

int firstIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx==n){
        return -1; //not present case..keep it in mind
    }
    int l=arr[idx];
    if(l==x){
        return idx;
    }
    int k=firstIndex(arr,idx+1,x,n);
    return k;
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = firstIndex(arr, 0, d, n);
    cout << p << endl;
}