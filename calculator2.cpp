#include <iostream>
using namespace std;

int main(){
    int flag = 1;
    while(flag){
    double a, b;
    cout <<"give 2 numbers: "<<endl;
    cin >> a >> b;

    cout<<"give command: (Give q/Q to quit)"<<endl;

    char command;
    cin >> command;
    command = toupper(command);

    switch(command){
        case 'Q':
            cout<<"Quitting..."<<endl;
            flag = 0;
            break;
        case '+':
            cout<<"Addition is: "<<a+b<<endl;
            break;
        case '-':
            cout<<"Sun=btraction is: "<<a-b<<endl;
            break;
        case '*':
            cout<<"Multiplication is: "<<a*b<<endl;
            break;
        case '/':
            if(b==0){
                cout<<"Division by zero is not possible!"<<endl;
                break;
            }
            else{
                cout<<"Division is: "<<a/b<<endl;
                break;
            }
        default:
            cout<<"Invalid Command!"<<endl;
            break;
    }
}
}