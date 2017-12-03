/*
 1 way of commenting
 */

// another way of commenting

#include <iostream>
using namespace std;

// in C++, we use brackets {} for defining a function
// in C++, end of line is ; symbol
// defining a function
// implementation
// return_type function_name(paramters) {:::::}
int my_function(){
    // variables are defined with type
    int a = 10;
    int b = 20;
    int sum = a + b;
    // cout (see out) is used to print something
    // cout << a + b << endl;
    return sum;
}

// defining another function
// implementation
void another_function() {
    // to print something
    // endl means end line
    cout << "baber" << endl;
    // string is a datatype
    string my_string = "baber";
    int my_integer = 10;
    cout << my_string << endl;
    
    // possible datatypes: int, float/double, string, vectors ...
}

// main function
// everything which needs to be run is inside main function
int main(){
    another_function();
    int a = my_function();
    cout << a << endl;
    
    my_function();
    my_function();
}
