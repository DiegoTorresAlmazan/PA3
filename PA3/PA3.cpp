#include <iostream>

using namespace std;

// Function to convert inches to centimeters
double inchToCentimeter(double inches) {
    return inches * 2.54;
}

// Function to convert centimeters to inches
double centimeterToInch(double centimeters) {
    return centimeters / 2.54;
}

// Function to convert feet to meters
double footToMeter(double feet) {
    return feet * 0.3048;
}

// Function to convert meters to feet
double meterToFoot(double meters) {
    return meters / 0.3048;
}

// Function to convert miles to kilometers
double mileToKilometer(double miles) {
    return miles * 1.609;
}

// Function to convert kilometers to miles
double kilometerToMile(double kilometers) {
    return kilometers / 1.609;
}

// Function to convert ounces to grams
double ounceToGram(double ounces) {
    return ounces * 28.349;
}

// Function to convert grams to ounces
double gramToOunce(double grams) {
    return grams / 28.349;
}

// Function to convert pounds to kilograms
double poundToKilogram(double pounds) {
    return pounds * 0.453;
}

// Function to convert kilograms to pounds
double kilogramToPound(double kilograms) {
    return kilograms / 0.453;
}

// Function to convert ounces to milliliters
double ounceToMilliliter(double ounces) {
    return ounces * 29.573;
}

// Function to convert milliliters to ounces
double milliliterToOunce(double milliliters) {
    return milliliters / 29.573;
}

// Function to convert gallons to liters
double gallonToLiter(double gallons) {
    return gallons * 3.785;
}

// Function to convert liters to gallons
double literToGallon(double liters) {
    return liters / 3.785;
}

// Function to convert quarts to liters
double quartToLiter(double quarts) {
    return quarts * 0.946;
}

// Function to convert liters to quarts
double literToQuart(double liters) {
    return liters / 0.946;
}

// Function to convert PSI to kg/cm^2
double psiToKgPerCm2(double psi) {
    return psi * 0.07;
}

// Function to convert kg/cm^2 to PSI
double kgPerCm2ToPsi(double kgPerCm2) {
    return kgPerCm2 / 0.07;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}


int main() {
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Distance\n";
        cout << "2. Weight\n";
        cout << "3. Volume\n";
        cout << "4. Pressure\n";
        cout << "5. Temperature\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Distance
            int subChoice;
            do {
                cout << "Distance Menu:\n";
                cout << "1. Inch to Centimeter\n";
                cout << "2. Centimeter to Inch\n";
                cout << "3. Foot to Meter\n";
                cout << "4. Meter to Foot\n";
                cout << "5. Mile to Kilometer\n";
                cout << "6. Kilometer to Mile\n";
                cout << "7. Back to Main Menu\n";
                cout << "Enter your choice: ";
                cin >> subChoice;

                double value; // Declare value here
                switch (subChoice) {
                case 1:
                    cout << "Enter inches: ";
                    cin >> value;
                    if (value >= 0)
                        cout << "Centimeters: " << value * 2.54 << endl;
                    else
                        cout << "Invalid input. Negative values are not allowed." << endl;
                    break;
                case 2:
                    cout << "Enter centimeters: ";
                    cin >> value;
                    if (value >= 0)
                        cout << "Inches: " << value / 2.54 << endl;
                    else
                        cout << "Invalid input. Negative values are not allowed." << endl;
                    break;
                case 3:
                    cout << "Enter feet: ";
                    cin >> value;
                    if (value >= 0)
                        cout << "Meters: " << value * 0.3048 << endl;
                    else
                        cout << "Invalid input. Negative values are not allowed." << endl;
                    break;
                case 4:
                    cout << "Enter meters: ";
                    cin >> value;
                    if (value >= 0)
                        cout << "Feet: " << value / 0.3048 << endl;
                    else
                        cout << "Invalid input. Negative values are not allowed." << endl;
                    break;
                case 5:
                    cout << "Enter miles: ";
                    cin >> value;
                    if (value >= 0)
                        cout << "Kilometers: " << value * 1.609 << endl;
                    else
                        cout << "Invalid input. Negative values are not allowed." << endl;
                    break;
                case 6:
                    cout << "Enter kilometers: ";
                    cin >> value;
                    if (value >= 0)
                        cout << "Miles: " << value / 1.609 << endl;
                    else
                        cout << "Invalid input. Negative values are not allowed." << endl;
                    break;
                case 7:
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
                }
            } while (subChoice != 7);
            break;

            // Other cases for Weight, Volume, Pressure, Temperature...

        case 6: // Exit
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

    } while (choice != 6);

    return 0;
}