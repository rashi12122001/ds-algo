#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf){
    // write your code here
    if(sr==dr && sc==dc){
        cout<<psf<<endl;
    }
    if(sr==dr+1){
        return;
    }
      if(sc==dc+1){
        return;
    }
    
    printMazePaths(sr,sc+1,dr,dc,psf+"h");
     printMazePaths(sr+1,sc,dr,dc,psf+"v");
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}