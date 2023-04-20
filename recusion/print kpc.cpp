#include <iostream>
using namespace std;
/*
1. You are given a string str. The string str will contains numbers only, where each number stands for a key pressed on a mobile phone.
2. The following list is the key to characters map
    0 -> .;
   1 -> abc
   2 -> def
   3 -> ghi
   4 -> jkl
   5 -> mno
   6 -> pqrs
   7 -> tu
   8 -> vwx
   9 -> yz
3. Complete the body of printKPC function - without changing signature - to print the list of all words that could be produced by the keys in str.
Use sample input and output to take idea about output.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.     
                               
Sample Input
78
Sample Output
tv
tw
tx
uv
uw
ux
*/

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
   if(ques.length()==0){
       cout<<asf;
       cout<<endl;
       return;
   }
   char a=ques.at(0);
   string ans1=ques.substr(1);
   string str=codes[a-'0'];
   for(int i=0;i<str.length();i++){  char ch=str[i];
       printKPC(ans1,asf+ch);
   }
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}