// String Compression
// Easy  Prev   Next
// 1. You are given a string. 
// 2. You have to compress the given string in the following two ways - 
//    First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
//    For "aaabbccdee", the compressed string will be "abcde".
//    Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
//    For "aaabbccdee", the compressed string will be "a3b2c2de2".
// Input Format
// A String
// Output Format
// Two strings representing first compressed string and second compressed string respectively.
// Question Video

//   COMMENTConstraints
// 1 <= length of string <= 1000
// Sample Input
// wwwwaaadexxxxxx
// Sample Output
// wadex
// w4a3dex6
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string str;
  cin>>str; //original string
  string s; //string 1
  string s2; //string 2
  int count=1;
 int n=str.length()-1;
	for(int i=0;i<=n;i++){
		if(str[i]!=str[i+1]){
			s=s+str[i];
			if(count !=1){
			s2=s2+str[i]+to_string(count); 
			    count=1;
			}
			else{
			    	s2=s2+str[i];
			}
		}
		else{
		    count++;
		}
	}
	cout<<s<<"";
	cout<<s2;


}