//
//  main.cpp
//  GCD_Trial_1
//
//  Created by Omar shaalan on 2/15/21.
//  Copyright © 2021 Omar shaalan. All rights reserved.
//Euclidean Algorithim.

#include <iostream>
using namespace std;

int GCD(int x, int y) // A function declared to find the Greatest Common devisor of 2 integers.
{
    int a = 0, b = 0, remainder = 0;
    if (x>y) // Comparing the two integers to find the largest.
    {
         a = x; //Storing in the varibale 'a' the larger integer.
         b = y; //Storing in the varibale 'b' the smaller integer.
    }
    else if (y>x)
    {
         a = y; //Storing in the varibale 'a' the larger integer.
         b = x; //Storing in the varibale 'b' the smaller integer.
    }
    while (b!=0) ///The loop will end only when the remainder is 0 as only then we will reach the divisor m that divides 'a' and 'b'.
    {
        remainder = a%b; //Getting the remainer of a/b.
        a = b; ///Assigning the value of 'b' to the value of 'a' as the value of b is greater than the value of the remainder.
        b = remainder;// assigning the smallest value (the value of the remainder to 'b').
    }
    return a; //Returning the last divisor from the last itteration.
    
}

int main() // A main function to test the algorithm.
{
    int x, y;
    cout<< "What are the two integers?\n";
    cin>>x;
    cin>>y;
    int z;
    z = GCD(x, y);
    cout<< "The gratest common divisor for "<< x<< " and "<< y<< " is "<< z<<endl<<endl;
    return 0;
}

