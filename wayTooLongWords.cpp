#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
      string s;
      cin>>s;

      if(s.length()>10){
        cout<<s[0] << s.length()-2<<s.back()<<endl;
      }
      else{
        cout<<s<<endl;
      }
    }

    return 0;
}