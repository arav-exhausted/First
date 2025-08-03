#include<iostream>
using namespace std;



int main(){


    cout<<"This is a simple age verification program"<<endl;

    int a;
    cout<<"What is you age?"<<endl;

    cin>>a;
    if(a>=18){
        cout<<"You are an adult!!";

    }

    else if(a<18){
        cout<< "You are a kid!!";

       }

    else{
        cout<<"wrong input";

    }
    
}
