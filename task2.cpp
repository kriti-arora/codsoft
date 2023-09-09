/*...........TASK 2............
...........SIMPLE CALCULATOR.........
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/

#include <iostream>
using namespace std;
void cal(double num1, double num2)
{
    char choice;
    double result;
    cout
        << "Enter the operation to be performed(+,-,*,/,%) : ";
    cin >> choice;
    switch (choice)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = double(int(num1) % int(num2));
        break;
    }
    cout << num1 << choice << num2 << "=" << result << endl;
    return;
}
int main()
{
    double num1, num2;
    cout << "Enter the 2 two numbers : " << endl;
    cin >> num1 >> num2;
    cal(num1,num2);
}
