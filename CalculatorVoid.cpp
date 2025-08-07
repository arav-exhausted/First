// A Calculator using void  function 
//The syntax is simple and basic c++ is required to understand
//The small calculator is the calculator every other person create during their c++ beginning


#include <iostream>
using namespace std;

void add(int a, int b){
    int c = a + b;

    cout<<"Sum of " << a << " and " << b << " is: " << c << endl;

}
void diff(int a, int b){
    if(a>b){
        int d = a-b;
        cout<<"Difference of " << a << " and " << b << " is: " << d << endl;

        
    }

    else if(b>a){
        int e = b-a;
        cout<<"Difference of " << a << " and " << b << " is: " << e << endl;

    }

}



void mul(int a, int b){
    int f = a*b;

    cout<<"Product of " << a << " and " << b << " is: " << f << endl;

}
void diiv(int a, int b){
   
   if(b==0){
        cout<<"Division by zero is not allowed"<<endl;
        
    }
    else{
        int g= a/b;
        cout<<"Division of " << a << " and " << b << " is: " << g << endl;


    }
   

}


int main(){


    cout<<"This is a simple calculator using void function"<<endl;
    cout<<"Please follow the instructions to go error free!!"<<endl;
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;


    char ch;
    cout<<"Enter the operator (+,-,*,/): "<<endl;
    cin>>ch;


    if(ch == '+'){
        add(a,b);
    }
    else if(ch == '-'){
        diff(a,b);
    }
    else if(ch == '*'){
        mul(a,b);
    }
    else if(ch == '/'){
        diiv(a,b);
    }
    else{
        cout<<"Choose a correct operator available";

    }

}
