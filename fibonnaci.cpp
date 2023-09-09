#include<iostream>

using namespace std;

void fibonnaci(int n){
    cout<< 0<< " "<< 1<<" "<<1<< " ";

    int prevNum=1;
    int currentNum=1;

    for(int i=0; i<n-3;i++){
        int sum=prevNum+currentNum;
        prevNum=currentNum;
        currentNum=sum;

        cout<< sum << " ";
    }
}


int main(){
    cout<< "Enter the number of terms: ";
    int n;
    cin>> n;

    fibonnaci(n);



    return 0;
}