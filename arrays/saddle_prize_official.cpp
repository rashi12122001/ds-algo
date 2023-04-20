// Saddle Price
// Easy  Prev   Next
// 1. You are given a square matrix of size 'n'. You are given n*n elements of the square matrix. 
// 2. You are required to find the saddle price of the given matrix and print the saddle price. 
// 3. The saddle price is defined as the least price in the row but the maximum price in the column of the matrix.
// Input Format
// A number n
// e11
// e12..
// e21
// e22..
// .. n * n number of elements of array a
// Output Format
// Saddle point of the matrix if available or "Invalid input" if no saddle point is there.
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^2
// -10^9 <= e11, e12, .. n * m elements <= 10^9
// Sample Input
// 4
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24
// 31
// 32
// 33
// 34
// 41
// 42
// 43
// 44
// Sample Output
// 41
#include <iostream>
#include <vector>
using namespace std;

void saddle_point(int n, vector<vector<int>>& a)
{ int svj=0;
int kp;
for(int i=0;i<n;i++){
		svj=0;
		for(int j=1;j<n;j++){
			if(a[i][j]<a[i][svj]){
				svj=j;
			}
		}
		bool flag=true;
		for(int k=0;k<n;k++){
			if(a[k][svj]>a[i][svj]){
				flag=false;
				break;
			}
		}
		if(flag==true){
			cout<<a[i][svj];
			kp=1;
			break ;
		}
	}
	if(kp==0){
		cout<<"Invalid input";
	}

//end of loop

}

//end

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  saddle_point(n, arr);
}//not universal