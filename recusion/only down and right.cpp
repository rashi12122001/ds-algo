// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;
//an n*m matrix in which we have only down and right option to reach destinantion.
//levels and options method is used.
void printways(int sr,int sc,int dr,int dc,string ans){
    if(sr==dc && sc==dr){
        cout<<ans<<endl;
        return;
    }
    if(sr==dr+1 || sc==dc+1){
        return;
    }
    printways(sr+1,sc,dr,dc,ans+'d');
    printways(sr,sc+1,dr,dc,ans+'r');
    
}
int main() {
   int n;
   cin>>n;
   int m;
   cin>>m;
   printways(0,0,n-1,m-1,"");

    return 0;
}