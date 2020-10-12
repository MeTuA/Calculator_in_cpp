// Example program
#include <iostream>
#include <string>
#include <string.h>
#include<math.h>
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

    else if(oper == "/"){
        cout << "Answer is: " << firstNum/secNum;
    }

    else if(oper == "sqrt"){
        cout << "Square root of a + b: " << sqrt(firstNum + secNum);
    }

    else if(oper == "!"){
        int ans = 1;
        for(int i = 1; i <= firstNum;i++){
            ans = ans * i;
        }
        cout << "Factorial of " << firstNum << " is " << ans << endl;

        int ans_2 = 1;
        for(int i = 1; i <= secNum; i++){
            ans_2 = ans_2 * i;
        }
        cout << "Factorial of " << secNum << " is " << ans_2 << endl;
    }

    cout << "This is end of program";
}
