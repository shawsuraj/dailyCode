#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){

    if(i==n-1){
      for(int j=0; j<=i;j++){
        cout<<j+1<<"\t";
      }

      //dec
      for(int j=i-1; j>=0;j--){
        cout<<j+1<<"\t";
      }
      cout<<endl;
    }

    else{
      //inc
      for(int j=0; j<=i;j++){
        cout<<j+1<<"\t";
      }

      //space
      for(int j=0;j<=n-2*i;j++){
        cout<<" "<<"\t";
      }


      //dec
      for(int j=i; j>=0;j--){
        cout<<j+1<<"\t";
      }
      cout<<endl;
    }

  }
}
