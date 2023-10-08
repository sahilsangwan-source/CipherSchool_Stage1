#include <iostream>
using namespace std;

int main(){
    int i;
    int arr[4];
    for(i = 0;i < 5;++i){
        cin>>arr[i];
    }
    cout<<"The 5 given inputs are: \n";
    for(i = 0;i < 5;++i){
        cout<<arr[i]<<"  \n";
    }
    cout<<"The revresed order is :\n";
    for(i = 4;i >= 0;--i){
        cout<<arr[i]<<" ";
    }
}