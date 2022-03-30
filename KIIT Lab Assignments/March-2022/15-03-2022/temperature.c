#include <stdio.h>

int main()
{
    float celsius, fahrenheit,kelvin;
    printf("Celsius\t\tFahrenheit\tKelvin\n");
    celsius=20;
    fahrenheit = (celsius * 9 / 5) + 32; 
    kelvin = celsius + 273.15;
    printf("%.2f\t\t%.2f\t\t%.2f\n",celsius, fahrenheit,kelvin);
    celsius+=20;
    fahrenheit = (celsius * 9 / 5) + 32; 
    kelvin = celsius + 273.15;
    printf("%.2f\t\t%.2f\t\t%.2f\n",celsius, fahrenheit,kelvin);
    celsius+=20;
    fahrenheit = (celsius * 9 / 5) + 32; 
    kelvin = celsius + 273.15;
    printf("%.2f\t\t%.2f\t\t%.2f\n",celsius, fahrenheit,kelvin);
    celsius+=20;
    fahrenheit = (celsius * 9 / 5) + 32; 
    kelvin = celsius + 273.15;
    printf("%.2f\t\t%.2f\t\t%.2f\n",celsius, fahrenheit,kelvin);
    celsius+=20;
    fahrenheit = (celsius * 9 / 5) + 32; 
    kelvin = celsius + 273.15;
    printf("%.2f\t\t%.2f\t\t%.2f\n",celsius, fahrenheit,kelvin);
}