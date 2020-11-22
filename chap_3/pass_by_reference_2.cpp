#include<iostream>
using namespace std;

/**
 * Swap values using references
 * 
 * author: ranjan-stha
 */

void swap(int &first, int &second){
    int temp;
    temp = first;
    first = second;
    second = temp;
}

int main(){
    int f = 5, s = 10;
    cout << "Before swapping: ";
    cout << f << "\t" << s << endl;
    swap(f, s);
    cout << "After swapping: ";
    cout << f << "\t" << s << endl;
    
    return 0;
}