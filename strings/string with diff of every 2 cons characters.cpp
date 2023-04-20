// String With Difference Of Every Two Consecutive Characters
// Easy  Prev   Next
// 1. You are given a string that contains only lowercase and uppercase alphabets. 
// 2. You have to form a string that contains the difference of ASCII values of every two consecutive characters between those characters.
//    For "abecd", the answer should be "a1b3e-2c1d", as 
//    'b'-'a' = 1
//    'e'-'b' = 3
//    'c'-'e' = -2
//    'd'-'c' = 1
// Input Format
// A String
// Output Format
// A String
// Question Video

//   COMMENTConstraints
// 1 <= length of string <= 1000
// Sample Input
// pepCODinG
// Sample Output
// p-11e11p-45C12O-11D37i5n-39G
#include<iostream>
#include<string.h>

using namespace std;

void printstr(string str)
{ int n=str.length();
int a,b,c;
for(int i=0;i<n;i++){
    a=int(str[i]);
    b=int(str[i+1]);
    c=b-a;
    if(i==n-1){
        cout<<str[i];
    }else{
        
    cout<<str[i]<<c;
}
}
}

int main()
{
  string str;
  getline(cin, str);
  printstr(str);
  return 0;
}