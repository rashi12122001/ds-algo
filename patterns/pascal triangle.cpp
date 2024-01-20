// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
  for(int i=1;i<=n;i++){
      int count=1;
      for(int sp=n-i;sp>=0;sp--){
          
          cout<<' ';
      }
      for(int j=1;j<=2*i-1;j++){
          
          cout<<count;
          
          if(j<i){
          count++;
          }
          else{
          count--;
          }
      }
      cout<<endl;
  }
    return 0;
}