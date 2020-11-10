#include<iostream>
using namespace std;

/**
 * When a variable is declared const, we can't change the value of it
 * 
 * author: ranjan-stha
 */

int main(){
    
    const int x = 5;
    
    //x++;  // produces error
    
    int p = 5, q = 3;
    int * const r = &p;
    
    cout << *r << endl;
    
    //r = &q; // produces error
    
    cout << *r << endl;
    
    return 0;
}