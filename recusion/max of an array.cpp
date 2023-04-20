// Max Of An Array
// Easy  Prev   Next
// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to find the maximum of input. 
// 4. For the purpose complete the body of maxOfArray function. Don't change the signature.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.
// Input Format
// A number n
// n1
// n2
// .. n number of elements
// Output Format
// A number representing max
// Question Video

//   COMMENTConstraints
// 1 <= n <= 10^4
// 0 <= n1, n2, .. n elements <= 10 ^9
// Sample Input
// 6
// 15
// 30
// 40
// 4
// 11
// 9
// Sample Output
// 40
#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    if(idx==n){
        return arr[n-1];
    }
    int x=arr[idx];
    int y=max(arr,idx+1,n);
    if(x>y){
        return x;
    }
    else{
        return y;
    }
    
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
