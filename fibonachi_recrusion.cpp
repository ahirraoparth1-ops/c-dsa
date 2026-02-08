#include<iostream>
using namespace std;

    int fun(int n){
        if (n<=1)
        {
            return n;
        }
        int last = fun(n-1);
        int second_last = fun(n-2);

        return last+second_last;


        
    }

int main(){
    
    cout<<fun(4);
} 