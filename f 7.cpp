#include <iostream>
using namespace std;
class TemperatureConverter {
public:
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};
int main() {
    TemperatureConverter obj;
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Equivalent temperature in Fahrenheit: " << obj.celsiusToFahrenheit(celsius) << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Equivalent temperature in Celsius: " << obj.fahrenheitToCelsius(fahrenheit) << endl;
    return 0;
}

