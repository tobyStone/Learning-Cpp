// simple maths to int.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main()
{
    cout << "Please input a number" << endl;
    int n;
    cin >> n;
    cout << "The number is " << n << endl
        << "n + 1 = " << n + 1
        << "\nThree times n = " << 3 * n
        << "\nTwice n = " << n + n
        << "\nn squared is " << n * n
        << "\nHalf of n = " << n / 2
        << "\nModulus n when divided by 3 is " << n % 3
        << "\nThe square root of n is " << sqrt(n) << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
