#include<iostream>
using namespace std;

/**
 * This program checks if the number is prime or not
 * Example of pass by value in arg list
 * 
 * author: ranjan-stha
 */
 
bool is_prime(int n){
    for(int i=2;i<n/2;i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    
    cout << "Enter a number ";
    cin >> num;
    
    bool answer = is_prime(num);
    if(answer)
        cout << "The num " << num << " is prime" << endl;
    else
        cout << "The num " << num << " is composite" << endl;
    
    return 0;
}