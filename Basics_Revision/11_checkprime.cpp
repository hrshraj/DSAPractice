#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=2; i<n ; i++){
        if(n%i==0){
            cout<<"Not prime";
            return 0;
        }
        else{
            cout<<"Prime";
            return 0;
        }
    }
}