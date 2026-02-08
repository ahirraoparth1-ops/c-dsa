#include <iostream>
#include <vector>
using namespace std;

    void fun (int i, vector<int> &ds, int arr[], int n){
        if(i==n){
            for(auto it : ds){
                cout << it << " ";
            }
            cout <<endl;
            return;
        }

        ds.push_back(arr[i]);
        fun(i+1,ds,arr,n);
        
        ds.pop_back();

        fun(i+1,ds,arr,n);
        
    }
int main(){
    int n =3;
    int arr[n]={3,2,1};

    vector<int> ds;
    fun(0,ds,arr,n);
}