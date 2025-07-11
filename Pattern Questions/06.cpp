// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 4 9 16 25 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of grid:";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(j*j)<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(j*j*j)<<" ";
        }
        cout<<endl;
    }
}