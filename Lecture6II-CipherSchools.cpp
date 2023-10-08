#include <iostream>
using namespace std;

int main(){
    int i = 0;
    cout<<i++; // answr is 1
    cout<<i;
    cout<<++i;// asnwer is 2

    int i,j,k;
    i = 0; j = 0;k = 0;
    cout<<i<<" "<<j<<" "<<k<<endl;
    j = i++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    k = i++;

    for (int i = 0; i < 100;++i){
        cout<<i<<" ";
    }
}