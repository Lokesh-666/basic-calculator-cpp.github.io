#include <iostream>
using namespace std;


double add(double a, double b){
    double answer = a+b;
    return answer;
}

double sub(double a, double b){
    double answer = a-b;
    return answer;
}

double mul(double a, double b){
    double answer = a*b;
    return answer;
}

double divi(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed\n");
    }
    return a / b;
}

int main(){
    
    double a,b;
    while(true){
    cout << "A. Addition\n";
    cout << "B. Subtraction\n";
    cout << "C. Multiplication\n";
    cout << "D. Division\n";
    cout << "E. Exit\n";
    cout <<"Enter your command of action\n";
    char command;
    cin >> command;
    // Convert the command to uppercase
    command = toupper(command);
    if(command=='E') {cout<<"Programe quits!!"<<endl; break;}
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    switch(command){
        case 'A':
            cout << "Addition of a and b is: "<< add(a,b)<< endl;
            break;
        case 'B':
            cout << "Subtraction of a and b is: " << sub(a,b)<<endl;
            break;
        case 'C':
            cout << "Multiplication of a and b is: " << mul(a,b)<<endl;
        break;
        case 'D':
                try {
                    cout << "Division of a and b is: " << divi(a, b)<<endl;
                } catch (const runtime_error& e) {
                    cout << e.what();
                }
                break;
        
        default:
            cout<<"Invalid Command\n"<<endl;
            break;

}
}}