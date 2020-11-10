#include<iostream>
using namespace std;

/**
 * Dynamically created arrays in C++ using new 
 * 
 * author: ranjan-stha
 */

#define MAX 5

int main(){
    
    int *prices = new int[MAX]; // use DMA
    
    // Get the input
    for(int i=0;i<MAX;i++){
        cout << "Enter a number ";
        cin >> prices[i];
    }
    
    // Display the prices
    cout << "The list of prices are: " << endl;
    for(int i=0;i<MAX;i++){
        cout << prices[i] << endl;
    }
    
    return 0;
}