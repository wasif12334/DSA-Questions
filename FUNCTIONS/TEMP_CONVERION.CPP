
#include <iostream>
using namespace std;

void convertFtoC(float *fahrenheit, float *celsius) {
    *celsius = (*fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit, celsius;
    
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    convertFtoC(&fahrenheit, &celsius);
    
    cout << "Temperature in Celsius: " << celsius << endl;
    
    return 0;
}