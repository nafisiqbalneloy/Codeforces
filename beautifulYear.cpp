#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
   
    int year;
    cin>>year;


    while(true){
        year++;

         string s = to_string(year); //converting to string
         set<char> elem; // for storing distinct number
         for(char c:s){
            elem.insert(c); // inserting every string to set
         }

         if(elem.size()==4){
            cout<<year<<endl; //beautiful year
            break; // if find beautiful year then break and out of loop

         }
        
    }
    return 0;
}