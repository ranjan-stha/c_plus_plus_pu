#include<iostream>
#include<iomanip>

using namespace std;

/**
 * Manipulator example
 * 
 * author: ranjan-stha
 */

int main(){
    double my_val = 34.526262744;

    cout << setiosflags(ios::showpos);
    cout << setiosflags(ios::internal);
    cout << setiosflags(ios::fixed);
    cout << setfill('#');
    cout << setprecision(5);
    cout << setw(10);
    cout << my_val << endl;

    return 0;
}