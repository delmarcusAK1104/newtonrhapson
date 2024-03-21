#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double fx(double x)
{
    double y = -1 * pow(x, (2.0) ) + (1.8 * x) + 2.5;
    return y;
}

double dfx(double x)
{
    double y = -2 * x + 1.8;
    return y;
}

int main()
{
    double x1, x2, ea, es, temp, n = 0;
    cout << "Enter x : ";
    cin >> x1;
    cout << "Enter es : ";
    cin >> es;
    do
    {
        x2 = x1 - (fx(x1) / dfx(x1)); 
        ea = (x2 - x1)/x2 * 100.0;
        if (ea < 0)
        {
            ea *= -1;
        }
        cout << "x" << n << " = " << setprecision(6) << x1 << "\t" << "x" << n+1 << " = " << setprecision(6) << x2;
        x1 = x2;
        
        cout << "\tea = " << setprecision(6) << ea << "\tfx = " << setprecision(6) << fx(x1) << "\tdfx = " << setprecision(6) << dfx(x1) << endl;

    }while (ea > es);

    cout << "Answer  = " << x2 << endl;

    return 0;

}