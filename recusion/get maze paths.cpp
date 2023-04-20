// Get Maze Paths
// Easy  Prev   Next
// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner. Only two moves are allowed 'h' (1-step horizontal) and 'v' (1-step vertical).
// 3. Complete the body of getMazePath function - without changing signature - to get the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
// Input Format
// A number n
// A number m
// Output Format
// Contents of the arraylist containing paths as shown in sample output
// Question Video

//   COMMENTConstraints
// 0 <= n <= 10
// 0 <= m <= 10
// Sample Input
// 3
// 3
// Sample Output
// [hhvv, hvhv, hvvh, vhhv, vhvh, vvhh]
#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
      if(sr==dr){
        vector<string>base;
        base.push_back(" ");
        return base;
    }
      if(sc==dc){
        vector<string>base;
        base.push_back(" ");
        return base;
    }
    vector<string> horizonal=getMazePaths(sr,sc+1,dr,dc);
    vector<string>vertical=getMazePaths(sr+1,sc,dr,dc);
    vector<string>final;
    for(string loop1:horizonal){
        final.push_back("h"+loop1);
    }
     for(string loop2:vertical){
        final.push_back("v"+loop2);
    }
    return final;

}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}