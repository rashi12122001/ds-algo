// Exit Point Of A Matrix
// Easy  Prev   Next
// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers (1's and 0's), representing elements of 2d array a.
// 4. Consider this array a maze and a player enters from top-left corner in east direction.
// 5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
// 6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.
// Input Format
// A number n
// A number m
// e11
// e12..
// e21
// e22..
// .. n * m number of elements
// Output Format
// row
// col (of the point of exit)
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^2
// 1 <= m <= 10^2
// e1, e2, .. n * m elements belongs to the set (0, 1)
// Sample Input
// 4
// 4
// 0
// 0
// 1
// 0
// 1
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 1
// 0
// 1
// 0
// Sample Output
// 1
// 3
#include <iostream>
using namespace std;


const int mr = 100, mc = 100;

int** input(int** mat, int n, int m)
{
  mat = new int* [n];
  for (int i = 0; i < n; i++)
  {
    int* arr = new int[m];
    for (int j = 0; j < m; j++)
    {
      cin >> arr[j];
    }
    mat[i] = arr;
  }
  return mat;
}


int main(int argc, char** argv)
{
  int n, m;
  cin >> n >> m;
  int** mat = input(mat, n, m);
  int dir=0;
  int i=0,j=0;

  // write your code here
while(true){
    dir=(dir+mat[i][j])%4;
    if(dir==0){
        j++;
    }
    else if(dir==1){
        i++;
    }
      else if(dir==2){
        j--;
    }
     else if(dir==3){
        i--;
    }
    if(i<0){
        i++;
        break;
    }
    else if(j<0){
        j++;
        break;
    }
    else if(j==m){
        j--;
        break;
    }
    else if(i==n){
        i--;
        break;
    }
}
cout<<i<<endl<<j;
  return 0;
}