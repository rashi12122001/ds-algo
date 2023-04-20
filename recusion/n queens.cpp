#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int>>chess,int row,int col){
    for(int i=row-1,j=col ; i>=0 ; i--){
        if(chess[i][j]==1){
            return false;
        }
    }
    
    for(int i=row-1,j=col-1 ; i>=0 && j>=0; i-- , j--){
        if(chess[i][j]==1){
            return false;
        }
    }
    
    for(int i=row-1,j=col+1 ; i>=0 && j<chess.size(); i-- , j++){
        if(chess[i][j]==1){
            return false;
        }
    }
    return true;
    
}
void printNQueens(vector<vector<int>> chess, string qsf, int row) {
  //write your code here
  if(chess.size()<=3){
      return;
  }
  if(row==chess.size()){
      cout<<qsf<<'.'<<endl;
      return;
  }
  for(int i=0;i<chess.size();i++){
      if(issafe(chess,row,i)==true){
      chess[row][i]=1;
      printNQueens(chess,qsf+to_string(row)+'-'+to_string(i)+',',row+1);
      chess[row][i]=0;
  }
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<int>> chess(n, vector<int> (n));
  printNQueens(chess, "", 0);
}