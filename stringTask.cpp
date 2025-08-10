#include<bits/stdc++.h>
using namespace std;
int main(){
    string input, result="";
    cin>>input;

    for(int i=0;i<input.size();i++){
       char letter = tolower(input[i]);

        if(letter =='a'|| letter =='o'|| letter =='y'|| letter =='e'|| letter =='u' || letter == 'i'){
             continue; // means will go to the next letter (if its vowel dont bother just continue)
        }
        else{
             result+="."; //result = result + '.';
             result+=letter;
        }

    }
    cout<<result<<endl;
    
    return 0;
}