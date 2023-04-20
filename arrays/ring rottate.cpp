// Ring Rotate
// Easy  Prev   Next
// You are given a n*m matrix where n are the number of rows and m are the number of columns. You are also given n*m numbers representing the elements of the matrix.
// You will be given a ring number 's' representing the ring of the matrix. For details, refer to image.

// shell-rotate

// You will be given a number 'r' representing number of rotations in an anti-clockwise manner of the specified ring.
// You are required to rotate the 's'th ring by 'r' rotations and display the rotated matrix.
// Input Format
// A number n
// A number m
// e11
// e12..
// e21
// e22..
// .. n * m number of elements of array a
// A number s
// A number r
// Output Format
// output is handled by display function
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^2
// 1 <= m <= 10^2
// -10^9 <= e11, e12, .. n * m elements <= 10^9
// 0 < s <= min(n, m) / 2
// -10^9 <= r <= 10^9
// Sample Input
// 5
// 7
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 21
// 22
// 23
// 24
// 25
// 26
// 27
// 31
// 32
// 33
// 34
// 35
// 36
// 37
// 41
// 42
// 43
// 44
// 45
// 46
// 47
// 51
// 52
// 53
// 54
// 55
// 56
// 57
// 2
// 3
// Sample Output
// 11 12 13 14 15 16 17
// 21 25 26 36 46 45 27
// 31 24 33 34 35 44 37
// 41 23 22 32 42 43 47
// 51 52 53 54 55 56 57
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
void reverse(int start,int end,int arr[]){
  
   while (start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int r,int a[],int z){
    r=r%z;
    if(r<0){
        r=r+z;
    }
    reverse(0,z-r-1,a);
    reverse(z-r,z-1,a);
    reverse(0,z-1,a);
}
int main(){
   int n,m;
    cin>>n>>m;
    //input
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>>arr[i][j];
        }
    }
    int s,r;
    cin>>s>>r;
    //end of input
    //filling an array with shell elements
    int minr=s-1;
    int maxr=n-s;
    int minc=s-1;
    int maxc=m-s; 
    int size = 2 * (maxr - minr + maxc - minc);
    int a[size];
    int z=0;
     for (int i = minr, j = minc; i <= maxr; i++)
    {
        
        a[z] = arr[i][j];
        z++;
    }
    minc++;
    for (int i = maxr, j = minc; j <= maxc; j++)
    {
       
        a[z] = arr[i][j];
        z++;
    }
    maxr--;
    for (int i = maxr, j = maxc; i >= minr; i--)
    {
       
        a[z] = arr[i][j];
        z++;
    }
    maxc--;
    for (int i = minr, j = maxc; j >= minc; j--)
    {
        
        a[z] = arr[i][j];
        z++;
    }
    rotate(r,a,z);
    // for(int i=0;i<z;i++){
    //     cout<<a[i]<<' ';
    // }
    //filling
     minr=s-1;
    maxr=n-s;
    minc=s-1;
    maxc=m-s;
    z=0;
     for (int i = minr, j = minc; i <= maxr; i++)
    {
        
        arr[i][j]=a[z];
        z++;
    }
    minc++;
    for (int i = maxr, j = minc; j <= maxc; j++)
    {
       
        arr[i][j]=a[z];
        z++;
    }
    maxr--;
    for (int i = maxr, j = maxc; i >= minr; i--)
    {
       
       arr[i][j]=a[z];
        z++;
    }
    maxc--;
    for (int i = minr, j = maxc; j >= minc; j--)
    {
        
       arr[i][j]=a[z];
        z++;
    }
    //output
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j]<<" ";
        }cout<<endl;
    }
    
}