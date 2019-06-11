#include<iostream>
using namespace std;
int main(){
  int n1,n2,lcm=1;
  cin>>n1>>n2;
  int grt=n2,sml=n1;
  if(n1>n2){
    grt=n1;
    sml=n2;
  }

  for(int i=2;i<=sml;i++){
    while(sml%i==0 && grt%i==0){
      lcm=lcm*i;
      grt=grt/i;
      sml=sml/i;
      cout<<sml<<'\t'<<grt<<"\t"<<lcm<<endl;
    }
  }
  lcm=lcm*sml*grt;
  cout<<lcm;

}
