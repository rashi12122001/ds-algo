#include <iostream>
using namespace std;
/*
Print Maze Paths
Easy  Prev   Next
1. You are given a number n and a number m representing number of rows and columns in a maze.
2. You are standing in the top-left corner and have to reach the bottom-right corner. Only two moves are allowed 'h' (1-step horizontal) and 'v' (1-step vertical).
3. Complete the body of pri tMazePath function - without changing signature - to print the list of all paths that can be used to move from top-left to bottom-right.
Use sample input and output to take idea about output.

Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
Input Format
A number n
A number m
Output Format
Print paths (one path in each line) in order hinted by Sample output
Question Video

  COMMENTConstraints
0 <= n <= 10
0 <= m <= 10
Sample Input
2
2
Sample Output
hv
vh
*/

void printStairPaths(int n, string psf){
    // write your code here
    if(n<0){
        return;
    }
    if(n==0){
      cout<<psf<<endl;
      return;
    }
    printStairPaths(n-1,psf+"1");
    printStairPaths(n-2,psf+"2");
    printStairPaths(n-3,psf+"3");
    
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}