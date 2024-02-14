/*
Author: Jack Lin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

This program prints out the first 60 numbers of 
the fibonacci sequence. 
*/
#include <iostream>
using namespace std;

int main(){
    long fib[60];
    fib[0]=0;
    fib[1]=1;
    for (int i=2; i<60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i=0; i<60; i++){
        cout << fib[i] << endl;
    }
    return 0;
}