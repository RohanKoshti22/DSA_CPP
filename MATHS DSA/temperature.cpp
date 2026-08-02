#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius)
{
    double kelvin = celsius + 273.15;
    double fahrenheit = celsius * 1.80 + 32.00;

    return {kelvin, fahrenheit};
}

int main()
{
    double celsius = 36.50;

    vector<double> ans = convertTemperature(celsius);

    cout << "Kelvin = " << ans[0] << endl;
    cout << "Fahrenheit = " << ans[1] << endl;

    return 0;
}