// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the grid:";
    cin>>n;

    for(int i=1;i<=n;i++){
        
        for(int j=1; j<=n; j++){
            char name = 'a'+(j-1);
            cout<<name<<" ";


        }
        cout<<endl;

    }
}