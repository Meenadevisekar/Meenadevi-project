/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


Meena devi <devimeena3814@gmail.com>
3:22 PM (0 minutes ago)
to me

/* Name - Meenadevi GS
College - Vivekananda college of engineering for women 
Input used in this program is
  FUNCTIONS
  IF-ELSE CONDITIONAL STATEMENT  */
[7/13, 3:20 PM] : #include <iostream>
using namespace std;

void checkWeather(int temperature) {
    if (temperature >= 90) {
        cout << "It's very hot outside." << endl;
    } else if (temperature >= 70) {
        cout << "It's a nice day." << endl;
    } else if (temperature >= 50) {
        cout << "It's a bit chilly." << endl;
    } else {
        cout << "It's cold outside." << endl;
    }
}

int main() {
    int temperature;
    cout << "Enter your Location: ";
    cin >> temperature;

    checkWeather(temperature);

    return 0;
}
