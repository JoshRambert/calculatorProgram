#include <iostream>

using namespace std;

//create a program that acts as a calculator

//create variables that will be used throughout the program
//integers that will be entered by the user
int NUM1;
int NUM2;

int calc;

//use variables for the operators that the user will enter
char math;

int main()
{
    //ask the user to enter integers for the mathematical equation
    cout << "Enter two integers ";
    cin >> NUM1;
    cin >> NUM2;

    //ask the user to enter a mathematical operator
    cout << "Enter either *,/,+,%, or - ";
    cin >> math;

    //create an if else nest for the program
    if (math == '*')
    {
        //display the calculation for a multiplication
        calc = NUM1 * NUM2;
        cout << "The answer is... " << calc << endl;
    }
    else
    {
        if (math == '/')
        {
            if (NUM2 == 0)
            {
                cout << "Cannot divide by zero ";
            }
            else
            {
                //display the calculation for a division
            calc = NUM1 / NUM2;
            cout << "The answer is... " << calc << endl;
            }
        }
        else
        {
            if (math == '%')
            {
                //display the calculation for a modulo
                calc = NUM1 % NUM2;
                cout << "The answer is... " << calc << endl;
            }
            else
            {
                if (math == '+')
                {
                    //display the calculation for an addition
                    calc = NUM1 + NUM2;
                    cout << "The answer is..." << calc << endl;
                }
                else
                {
                    if (math == '-')
                    {
                        //display the calculation for a subtraction problem
                        calc = NUM1 - NUM2;
                        cout << "The answer is... " << calc << endl;
                    }
                    else
                    {
                        if (math != '*' || '/' || '%' || '+' || '-')
                        {
                            cout << "Invalid input ";
                        }
                    }
                }
            }
        }
    }

    return 0;
}
