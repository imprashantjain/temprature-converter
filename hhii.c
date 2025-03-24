#include <stdio.h>

// Function prototypes
void celsiusToOther();
void fahrenheitToOther();
void kelvinToOther();

int main() {
    int choice;

    while (1) { // Infinite loop to keep the program running until user exits
        // Display menu
        printf("\nTemperature Converter\n");
        printf("1. Celsius to Fahrenheit & Kelvin\n");
        printf("2. Fahrenheit to Celsius & Kelvin\n");
        printf("3. Kelvin to Celsius & Fahrenheit\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform conversion based on user choice
        switch (choice) {
            case 1:
                celsiusToOther();
                break;
            case 2:
                fahrenheitToOther();
                break;
            case 3:
                kelvinToOther();
                break;
            case 4:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to convert Celsius to Fahrenheit & Kelvin
void celsiusToOther() {
    float celsius, fahrenheit, kelvin;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32; // Conversion formula
    kelvin = celsius + 273.15; // Conversion formula
    
    printf("Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Kelvin: %.2fK\n", kelvin);
}

// Function to convert Fahrenheit to Celsius & Kelvin
void fahrenheitToOther() {
    float fahrenheit, celsius, kelvin;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9; // Conversion formula
    kelvin = celsius + 273.15; // Conversion formula
    
    printf("Celsius: %.2f°C\n", celsius);
    printf("Kelvin: %.2fK\n", kelvin);
}

// Function to convert Kelvin to Celsius & Fahrenheit
void kelvinToOther() {
    float kelvin, celsius, fahrenheit;
    printf("Enter temperature in Kelvin: ");
    scanf("%f", &kelvin);
    
    celsius = kelvin - 273.15; // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32; // Conversion formula
    
    printf("Celsius: %.2f°C\n", celsius);
    printf("Fahrenheit: %.2f°F\n", fahrenheit);
}