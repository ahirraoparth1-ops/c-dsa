#include <iostream>
using namespace std;
//print the sum of n uisng paramaterized way
 void fun (int i,int sum){
    
    if(i<1){

       cout<<sum<<endl;
        return;    
        
    }
    fun(i-1, sum+i);    
    

    
 }
 
 int main(){
    int n=3;
    fun(n,0);
    
}