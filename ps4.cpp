#include <iostream>
using namespace std;

 void fun(int i, int n){
    if (i<1)
    {
        return;
    }

    fun(i-1,n);
    cout <<i<<endl;
    
 } 
int main (){
    //print 1 to n using backtracking

    int n;
    cin >> n;
    fun(n,n);
}