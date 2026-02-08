#include <iostream>
using namespace std;

bool fun(int i,string arr[],int n){
    if(i>=n/2){
        return true;}

        if(arr[i] != arr[n-i-1]){
            return false;
        }
        return fun(i+1,arr,n);
    }




int main(){

    int n;

    cin>>n;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (fun(0, arr, n)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
}
