// Print All Palindromic Substrings
// Easy  Prev   Next
// 1. You are given a string. 
// 2. You have to print all palindromic substrings of the given string.
// Input Format
// A String
// Output Format
// All palindromic substrings(one in a line).
// First, all palindromic substrings starting from first character of string will be printed, then from second character and so on.
// Question Video

//   COMMENTConstraints
// 1 <= length of string <= 500
// Sample Input
// abcc
// Sample Output
// a
// b
// c
// cc
// c
#include<iostream>
#include<string.h>
using namespace std;
int palindrome(string str, int m){
   int start=0,end=m-1;
   int res=0;
   while(start<end){
       if(str[start]==str[end]){
           res=1;
       }
       else{
           res=0;
        return res;
       }
       start++;
       end--;
   }
   return res;
}
void printallpalindrome(string str)
{ 
int m;
int n=str.length();
int end=n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=end;j++){
        string str1=str.substr(i,j);
        m=str1.length();
        
    //   cout<<str1<<endl;
        int chk=palindrome(str1,m);
        if(chk==1){
            cout<<str1<<endl;
        }
        else if(m==1){
            cout<<str1<<endl;
        }
      
        
    }
    end--;
  //write your code here
}
}

int main()
{
  string str;
  getline(cin, str);  printallpalindrome(str);
  return 0;
}