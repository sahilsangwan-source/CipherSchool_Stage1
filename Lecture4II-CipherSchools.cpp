#include <iostream>
using namespace std;

int main(){
    float b,a;
    cin>>a>>b;
    if(a > 0.01  &&  b > a){
        cout<<"The condition in if satatement is correct";
    }
    else{
        cout<<"condition is false";
    }
}




#include <iostream>
using namespace std;

int main(){
    int marks;

    cout<<"Student please enter the marks to know your grade : ";
    cin>>marks;

    if(marks > 90){
        cout<<"A";
    }
    else if(marks > 80){
        cout<<"B";
    }
    else if(marks > 70){
        cout<<"C";
    }
    else{
        cout<<"D";
    }
}

#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if (a>b && c>d){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else{
        cout<<"hoho";
    }
}


#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a in integer: ";

    switch (a)
    {
    case 1:
    cout<<"The value of a is 1 ";   
    break;
    case 2:
    cout<<"The value of a is 2 ";
    break;
    case 3:
    cout<<"The value of a is 3 ";
    default:
        cout<<"Default will always printed: ";
        break;
    }
}