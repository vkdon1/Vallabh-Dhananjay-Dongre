
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    string operation;
    
    cout << "Enter 1st number : " << endl;
    cin >> a;
    cout << "Enter 2nd number : " << endl;
    cin >> b;
    cout << "Enter Operation (addition, subtraction, multiplication, division) : " << endl;
    cin >> operation;
    
    if (operation == "addition") {
        cout << "Result = " << a + b << endl;
    }
    else if (operation == "subtraction") {
        cout << "Result = " << a - b << endl;
    }
    else if (operation == "multiplication") {
        cout << "Result = " << a * b << endl;
    }
    else if (operation == "division") {
        if (b != 0)
            cout << "Result = " << a / b << endl;
        else
            cout << "Error: Division by zero" << endl;
    }
    else {
        cout << "Please specify a valid operation" << endl;
    }
    
    return 0;
}
