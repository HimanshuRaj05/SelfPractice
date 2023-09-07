#include<iostream>
using namespace std;

int main(){
    cout<< "Enter a string: ";
    string s;
    cin>> s;

    string reversedString="";

    int stringLength=s.length();

    for(int i=stringLength; i>=0; i--){
        reversedString+=s[i];
    }

    cout<< "Reversed string is: "<< reversedString<< endl;

}