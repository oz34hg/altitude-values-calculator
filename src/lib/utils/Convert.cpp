#include <Convert.hpp>

// convert celsius to fahrenheit
float Convert::c_to_f(float celsius){
    float converted_value = celsius * (9.0f / 5.0f) + 32.0f;
    return converted_value;
}

// convert celsius to kelvin
float Convert::c_to_k(float celsius){
    float converted_value = celsius + 273.15f;
    return converted_value;
}

// convert fahrenheit to celsius
float Convert::f_to_c(float fahrenheit){
    float converted_value = (fahrenheit - 32.0f) * (5.0f / 9.0f);
    return converted_value;
}

// convert fahrenheit to kelvin
float Convert::f_to_k(float fahrenheit){
    float converted_value = (fahrenheit + 459.67f) * (5.0f / 9.0f);
    return converted_value;
}
    
// convert kelvin to celsius
float Convert::k_to_c(float kelvin){
    float converted_value = kelvin - 273.15f;
    return converted_value;
}
    
// convert kelvin to fahrenheit
float Convert::k_to_f(float kelvin){
    float converted_value = (kelvin - 273.15f) * (9.0f / 5.0f) + 32.0f;
    return converted_value;
}

// convert feet to meters 
float Convert::feet_to_meters(float feet){
    float converted_value = feet * 0.3048f;
    return converted_value;
}

// convert meters to feet
float Convert::meters_to_feet(float meters){
    float converted_value = meters * 3.28084f;
    return converted_value;
}

// convert kilometers to miles
float Convert::km_to_miles(float km){
    float converted_value = km * 0.621371f;
    return converted_value;
}

// convert miles to kilometers
float Convert::miles_to_km(float miles){
    float converted_value = miles * 1.60934f;
    return converted_value;
}




