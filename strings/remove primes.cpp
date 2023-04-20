#include<iostream>
#include<string>
// Remove Primes
// Easy  Prev   Next
// 1. You are given an ArrayList of positive integers.
// 2. You have to remove prime numbers from the given ArrayList and return the updated ArrayList.

// Note -> The order of elements should remain same.
// Input Format
// A number N
// arr1
// arr2.. N numbers
// Output Format
// An Arraylist
// Question Video

//   COMMENTConstraints
// 1 <= N <= 10000
// Sample Input
// 4
// 3 12 13 15
// Sample Output
// [12, 15]
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

void printallperm(string str,int c,int n)
{
    for(int i=0;i<c;i++){
        int temp=i;
        string str1=str;
        for(int divi=n;divi>=1;divi--)
        {  
            int q=temp/divi;
        int r=temp%divi;
        cout<<str1[r];
         str1.erase(r, 1);
            temp=q;
        }
        cout<<endl;
    }
  //write your code here
}
int main()
{
  string str;
  getline(cin, str);
 int n=str.length();
int c=factorial(n);
  printallperm(str,c,n);
}