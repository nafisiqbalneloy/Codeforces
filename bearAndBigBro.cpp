#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int yearsCount=0;
    while(a<=b){ //condition
        a=3*a;
        b=2*b;
        yearsCount++;
    }
    cout<<yearsCount<<endl;
    return 0;
}