#include<iostream>
using namespace std;

   void fun(int i, int arr[], int n){

        if(i>n/2){
            return;
        }
        swap(arr[i], arr[n-i-1]);
       return fun(i+1,arr,n);
    }
int main(){
    //reverse an array using single pointer in recursion
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    fun(0,arr,n);
    
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}