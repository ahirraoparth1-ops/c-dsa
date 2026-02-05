#include<iostream>
using namespace std;

    void fun(int arr[],int i,int n){
        if(i>=n/2){
            return;
        }
        swap (arr[i],arr[n-i-1]);

        fun(arr,i+1,n);
    }
int main(){
    //reverse an array using single pointer in recursion
    
    int n[5]={2,3,4,5,6};
    fun(n,0,5);

    for(int i=0; i<5;i++){
        cout << n[i]<< " ";
    }
    
}