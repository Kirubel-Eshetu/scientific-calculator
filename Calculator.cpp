// Scientific Calculator here we go!
#include <iostream>
#include <cmath>
#define pi 3.14159265358979

using namespace std;

void welcomepage();
float sum(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float div(float x, float y);
double fac(float x);

int main()
{
    int k;
    float x, y, a, b, c, d, e, f;

    welcomepage();

    while (1)
    {
        cout << endl
             << "Enter the operation that you want to perform: " << endl;
        cin >> k;

        if (k == 0)
            break;

        switch (k)
        {
        case 1:
            cout << "Enter the two numbers to add: " << endl;
            cin >> x >> y;
            a = sum(x, y);
            cout << "SUM = " << a << endl;
            break;

        case 2:
            cout << "Enter two numbers to subtract: " << endl;
            cin >> x >> y;
            b = sub(x, y);
            cout << "SUBTRACTION = " << b << endl;
            break;

        case 3:
            cout << "Enter two numbers to multiply: " << endl;
            cin >> x >> y;
            c = mul(x, y);
            cout << "PRODUCT = " << c << endl;
            break;

        case 4:
            cout << "Enter numerator: " << endl;
            cin >> x;
            cout << "Enter denominator: " << endl;
            cin >> y;
            d = div(x, y);
            cout << "QUOTIENT = " << d << endl;
            ;
            break;

        case 5:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Enter the exponent: " << endl;
            cin >> y;
            cout << "Power = " << pow(x, y);
            break;

        case 6:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Square Root = " << sqrt(x);
            break;

        case 7:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Sine = " << sin(x * pi / 180);
            break;

        case 8:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Cosine = " << cos(x * pi / 180);
            break;

        case 9:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Tangent = " << tan(x * pi / 180);
            break;

        case 10:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Inverse of Sine = " << asin(x);
            break;

        case 11:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Inverse of Cosine = " << acos(x);
            break;

        case 12:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Inverse of Tangent = " << atan(x);
            break;

        case 13:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Logarithm = " << log(x);
            break;

        case 14:
            cout << "Enter a number: " << endl;
            cin >> x;
            cout << "Logarithm with base 10 = " << log10(x);
            break;

        case 15:
            cout << "Enter a number: " << endl;
            cin >> x;
            e = fac(x);
            cout << "Factorial = " << e;
            break;

        default:
            cout << "INVALID INPUT :(" << endl;
        }
    }
    return 0;
}

float sum(float x, float y)
{
    float sum;
    sum = x + y;
    return sum;
}

float sub(float x, float y)
{
    float sub;
    sub = x - y;
    return sub;
}

float mul(float x, float y)
{
    float mul;
    mul = x * y;
    return mul;
}

float div(float x, float y)
{
    float div;
    div = x / y;
    return div;
}

double fac(float x)
{
    double fact = 1;
    for (x; x >= 1; x--)
        fact = fact * x;
    return fact;
}

void welcomepage()
{
    cout << "(((((((((((((((::::::::::::::: WELCOME TO YOUR CALCULATOR :::::::::::::::)))))))))))))))" << endl;
    cout << endl
         << "-------------------------------------------------------------------------------------------------------";
    cout << endl
         << "\t\t\t\t      HERE ARE THE OPERATIONS" << endl;
    cout << "-------------------------------------------------------------------------------------------------------";
    cout << endl
         << "1. ADDITION\t\t 2. SUBTRACTION\t\t 3. MULTIPLICATION\t\t 4. DIVISION" << endl;
    cout << "5. EXPONENT\t\t 6. SQUARE ROOT\t\t 7. SINE\t\t\t 8. COSINE" << endl;
    cout << "9. TANGENT\t\t 10.INVERSE OF SINE\t 11.INVERSE OF COSINE\t\t 12.INVERSE OF TANGENT" << endl;
    cout << "13.LOGARITHM\t\t 14.LOG WITH BASE 10\t 15.FACTORIAL\t\t " << endl;
    cout << "0. EXIT..." << endl;
}
