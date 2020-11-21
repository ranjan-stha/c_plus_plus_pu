#include<iostream>
using namespace std;

/**
 * This program returns the quotient and remainder
 * Example of pass by reference in arg list
 * 
 * author: ranjan-stha
 */

// Function declaration
void divide(int, int, int *, int *);

int main(){
    int divisor = 2;
    int dividend = 11;
    
    int quotient, rem;
    
    divide(divisor, dividend, &quotient, &rem);
    
    cout << "The quotient is " << quotient << endl;
    cout << "The remainder is " << rem << endl;
    
    return 0;
}

// Function definition
void divide(int divisor, int dividend, int *quo, int *rem){
    *quo = dividend / divisor;
    *rem = dividend % divisor;
}