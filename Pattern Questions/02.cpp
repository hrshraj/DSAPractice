// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 
// 10 10 10 10 10 


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of grid:";
    cin>>n;

    for(int i =1; i<n; i++){
        for(int j=1; j<=n; j++){
            cout<<"10"<<" ";
        }
        cout<<endl;
    }
}