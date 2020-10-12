// Example program
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int adder(){
    
}

int main()
{
    int firstNum, secNum;
    cout << "enter first number: ";
    cin >> firstNum;
    cout << "enter second number: ";
    cin >> secNum;
    cout << "Select operation: +, -, *, !, /, sqrt : "; 
    
    string oper;
    cin >> oper;
    
    if(oper == "+"){
        cout << "Answer is: " << firstNum + secNum;
    }
    else if(oper == "-"){
    	cout << "Answer is: " << firstNum - secNum;
    }

    else if(oper == "*"){
    	cout << "Answer is: " << firstNum * secNum;
    }
}
