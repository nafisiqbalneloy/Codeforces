#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int n;
    cin>>n;
    int sum,a,b,c;

    for(int i = 0;i<n;i++){
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum>=2){
            count++;
        }
       
    }
    cout<<count<<endl;

    return 0;
}