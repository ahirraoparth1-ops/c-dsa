#include <iostream>
using namespace std;
//print the n factorial in recursion
    int factorial(int n){
        if(n==0 ){
            
            return 1;
        }
        return n* factorial(n-1);
    }
int main (){
    int n=4;
    cout << factorial(n);
    
}