// Print All Permutations Of A String Iteratively
// Easy  Prev   Next
// 1. You are given a string. 
// 2. You have to print all permutations of the given string iteratively.
// Input Format
// A String
// Output Format
// All permutations of the given string(one in a line). 
// Question Video

//   COMMENTConstraints
// 1 <= length of string <= 15
// Sample Input
// abc
// Sample Output
// abc
// bac
// cab
// acb
// bca
// cba
#include<iostream>
#include<string>
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