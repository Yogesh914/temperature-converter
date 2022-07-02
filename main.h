#pragma once 

class Temperature
{
    // Access specifier
    public:
 
    // Constructor
    double temperature;
    char method;
    double output;
    Temperature(double temp, char type){
        temperature = temp;
        method = type;
    }
 
    // Member Functions()
    double AsCelsius()
    {
        switch (method) {
            case 'F':
                output = ((temperature - 32) * 5/9);
                return output;
                break;
            case 'R':
                output = ((temperature - 491.67) * 5/9);
                return output;
                break;
            case 'K':
                output = temperature - 273.15;
                return output;
                break;
            default:
                return temperature;
        }
    }

    double AsFahrenheit(){
        switch (method) {
            case 'C':
                output = ((temperature * 9/5) + 32);
                return output;
                break;
            case 'R':
                output = (temperature - 459.67);
                return output;
                break;
            case 'K':
                output = (((temperature - 273.15) * 9/5) + 32);
                return output;
                break;
            default:
                return temperature;
        }
    }
    double AsKelvin(){
        switch (method) {
            case 'F':
                output = (((temperature - 32) * 5/9) + 273.15);
                return output;
                break;
            case 'R':
                output = (temperature * 5/9);
                return output;
                break;
            case 'C':
                output = temperature + 273.15;
                return output;
                break;
            default:
                return temperature;
        }
    }
    double AsRankine(){
        switch (method) {
            case 'F':
                output = (temperature + 459.67);
                return output;
                break;
            case 'C':
                output = ((temperature * 9/5) + 491.67);
                return output;
                break;
            case 'K':
                output = temperature * 1.8;
                return output;
                break;
            default:
                return temperature;
        }
    }

};