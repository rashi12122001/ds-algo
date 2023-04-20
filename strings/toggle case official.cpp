// Toggle Case
// Easy  Prev   Next
// 1. You are given a string that contains only lowercase and uppercase alphabets. 
// 2. You have to toggle the case of every character of the given string.
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
// PEPcodINg
#include<iostream>
#include<string>
using namespace std;

void togglecase(string str)
{ int n=str.length();

  //write your code here
  for(int i=0;i<n;i++){
  if(str[i]>=97 && str[i]<=129){
      str[i]=str[i]-32;
  }
  else{
       str[i]=str[i]+32;
  }
  }
  cout<<str;
}

int main() {
  string str;
  getline(cin, str);
  togglecase(str);
  return 0;
}