/**Kevin Griffin
 * Lab Ex-1
 * Celsius to Fahrenheit conversion
 *
 */

#include <iostream>

using namespace std;

int main()
{
    //Variable dclarations
    float celsius, fahrenheit;


    //prompts the user to enter a value for degrees celsius
    cout << "Enter temperature in degrees celsius: " << endl;
    //stores the entered value in the celsius location in memory
    cin >> celsius;
    //equation to calculate the equivalent fahrenheit value
    fahrenheit = ((9.0/5.0)* celsius) + 32;
    //displays the resulting temperature in degrees fahrenheit
    cout << " Temp in Fahrenheit: "<< fahrenheit << endl;

    return 0;
}
