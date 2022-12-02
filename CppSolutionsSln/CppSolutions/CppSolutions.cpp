// CppSolutions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Problems.h"
#include <vector>

using namespace std;

int main()
{
    double x = 0.0;

    cout << "Test Run" << endl << endl;

    Problems p;
    /*while (true)
    {
        cin >> x >> y;
        result = p.Add(x, y);
        cout << "Result: " << result << endl;
    }*/
    //std::string a = p.bmi(86.7, 1.7);
    //x = p.Add(2, 2);

    //std::cout << p.bmi(91.6094, 1.69719) << std::endl;

    //int data{ 22 };
    //int *pointer1{ &data };
    //std::cout << "value of pointer: " << *pointer1 << std::endl; // dereferencing a pointer

    //---------------------------------------------------------------------

    //auto t = p.Add(2, 3);
    //std::cout << t << std::endl;


    auto arr = p.sortByLength({ "", "Moderately", "Brains", "Pizza" });

    std::cout << "[ ";
    for (auto i : arr)
    {
        std::cout << i << ", ";
    }
    std::cout << " ]";
    




    //---------------------------------------------------------------------




    return 0;
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
