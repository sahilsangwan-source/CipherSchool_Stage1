#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i < 100){
        cout<<i<<" ";
        ++i;
    }
}

int main(){
    int input, i = 100;
    for(int i = 1;i < 100;++i){
        cin>>input;
        if(input == 65){
            cout<<"Congrates you have guesed correct: ";
            break;
        }
    }
}