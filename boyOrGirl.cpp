#include<iostream>
#include<set>
using namespace std;
int main(){
    string str;
    cin>>str;

    set <char> uLetters;
    
    for(char c : str){
        uLetters.insert(c);
    }
    if(uLetters.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;

}