#include<iostream>

using namespace std;

bool checkPrime(int num){
    
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}


int main(){
    cout << "Enter a number: ";
    int num;
    cin>> num;

    bool isPrime=checkPrime(num);

    if(isPrime){
        cout<< "The given number is a prime number";
    }

    else{
        cout<< "The given number is not a prime number";
    }

    return 0;
}