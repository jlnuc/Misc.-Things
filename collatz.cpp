/*
Author: Jack Lin
Date: February 7, 2024

This is a function that takes in a positive integer
and proceeds to print out Collatz sequence starting with
that integer.
*/
#include <iostream>
using namespace std;

int main(){
    int term;
    cout << "Please enter a starting positive integer: ";
    cin >> term;
    if (term < 0){
        cout << "Please enter an actual positive integer: ";
        cin >> term;
    }
    cout << term << endl;
    do{
        if (term%2 == 0){
            term = term/2;
        }
        else{
            term = (3*term)+1;
        }
        cout << term << endl;
    }
    while(term > 1);
    return 0;
}