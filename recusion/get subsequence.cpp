/*
Get Subsequence
Easy  Prev   Next
1. You are given a string str.
2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
Use sample input and output to take idea about subsequences.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.
Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
Input Format
A string str
Output Format
Contents of the arraylist containing subsequences as shown in sample output
Question Video

  COMMENTConstraints
0 <= str.length <= 20
Sample Input
abc
Sample Output
[, c, b, bc, a, ac, ab, abc]*/
#include <iostream>
#include <vector>
#include<string.h>
using namespace std;

vector<string> gss(string s){
    
    if(s.length()==0){
        vector<string>base;
        base.push_back("");
        return base;
    }
    
    char first=s.at(0);//a
    string res=s.substr(1);//bc
    vector<string>fres=gss(res);
    
    vector<string>ffres;
    
    for(auto loop_variable :fres){
      ffres.push_back(""+loop_variable);
    }
    for(auto loop_variable :fres){
      ffres.push_back(first+loop_variable);
    }
    return ffres;
    }
    

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}