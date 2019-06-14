#include<iostream>
using namespace std;
int main() {
    int num1,num2;
    cin>>num1>>num2;

    int i=num1+1;
    for(i;i<num2;i++){
        int sum=0;
        int num=i;
        for(;num>0;num=num/10){
            sum=sum+((num%10)*(num%10)*(num%10));
        }
        if(sum==i){
        cout<<i<<endl;
        }
    }





	return 0;
}
