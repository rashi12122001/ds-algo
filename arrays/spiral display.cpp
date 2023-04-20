// Spiral Display
// Easy  Prev   Next
// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to traverse and print the contents of the 2d array in form of a spiral.
// Note - Please check the sample output for details.
// Input Format
// A number n
// A number m
// e11
// e12..
// e21
// e22..
// .. n * m number of elements
// Output Format
// e11
// e21
// ..
// en1
// en2
// en3
// ..
// enm
// e(n-1)m
// ..
// e1m
// e1(m-1)
// ..
// e12
// e22
// e32
// ..
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^2
// 1 <= m <= 10^2
// -10^9 <= e1, e2, .. n * m elements <= 10^9
// Sample Input
// 3
// 5
// 11
// 12
// 13
// 14
// 15
// 21
// 22
// 23
// 24
// 25
// 31
// 32
// 33
// 34
// 35
// Sample Output
// 11
// 21
// 31
// 32
// 33
// 34
// 35
// 25
// 15
// 14
// 13
// 12
// 22
// 23
// 24
#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int mat[mr][mc], int n, int m)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
}

int main(int argc, char** argv)
{


  int mat[mr][mc];
  int n, m;
  cin >> n >> m;

  inputBound(mat, n, m);

  // write your code here
  int minr=0;
  int minc=0;
  int maxr=n-1;
  int maxc=m-1;
  int count=0;
  int tot=n*m;
  while(count<tot){
      //const col and row inc--case 1
      for(int i=minr;i<=maxr && count<tot;i++){
          cout<<mat[i][minc]<<endl;
          count++;
      }
      minc++;
      //col 1 to last ,row is last--case 1
       for(int j=minc;j<=maxc && count<tot;j++){
          cout<<mat[maxr][j]<<endl;
          count++;
      }
      maxr--;
       for(int j=maxr;j>=minr && count<tot;j--){
          cout<<mat[j][maxc]<<endl;
          count++;
      }
      maxc--;
       for(int j=maxc;j>=minc && count<tot;j--){
          cout<<mat[minr][j]<<endl;
          count++;
      }
      minr++;
  }

  return 0;
}