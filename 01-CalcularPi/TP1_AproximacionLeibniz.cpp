#include<iostream>
#include<iomanip>
#include<cmath>
#define PI 3.14159265359

using namespace std;

int main()
{
    float aproximacion = 0.0, valorPi = 0.0, diferencia = 0.0000001;
    int i = 0;

    do
    {
        aproximacion = pow(-1,i) / (2*i + 1);
        valorPi += aproximacion;
        i++;
    } while (abs((valorPi*4)-PI) > diferencia);

    valorPi = (valorPi*4);
    cout << fixed << setprecision(7);
    cout << "El valor de pi en sus primeros 6 decimales es: " << valorPi << endl;
    return 0;
}