// SMU-Features.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;

// function to convert 
// Hexadecimal to Binary Number 
void HexToBin(string hexdec)
{
    long int i = 0;
    while (hexdec[i])
        i++;
    i--;
    while (i >= 0) {

        switch (hexdec[i]) {
        case '0':
            cout << "0\n0\n0\n0\n";
            break;
        case '1':
            cout << "1\n0\n0\n0\n";
            break;
        case '2':
            cout << "0\n1\n0\n0\n";
            break;
        case '3':
            cout << "1\n1\n0\n0\n";
            break;
        case '4':
            cout << "0\n0\n1\n0\n";
            break;
        case '5':
            cout << "1\n0\n1\n0\n";
            break;
        case '6':
            cout << "0\n1\n1\n0\n";
            break;
        case '7':
            cout << "1\n1\n1\n0\n";
            break;
        case '8':
            cout << "0\n0\n0\n1\n";
            break;
        case '9':
            cout << "1\n0\n0\n1\n";
            break;
        case 'A':
        case 'a':
            cout << "0\n1\n0\n1\n";
            break;
        case 'B':
        case 'b':
            cout << "1\n1\n0\n1\n";
            break;
        case 'C':
        case 'c':
            cout << "0\n0\n1\n1\n";
            break;
        case 'D':
        case 'd':
            cout << "1\n0\n1\n1\n";
            break;
        case 'E':
        case 'e':
            cout << "0\n1\n1\n1\n";
            break;
        case 'F':
        case 'f':
            cout << "1\n1\n1\n1\n";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "
                << hexdec[i];
        }
        i--;
    }
}

int main()
{
    string arg0, arg1;
    cout << "Please Enter Arg0 (no 0x prefix): ";
    cin >> arg0;
    cout << "Please Enter Arg1 (no 0x prefix): ";
    cin >> arg1;
    HexToBin(arg0);
    HexToBin(arg1);
    system("pause");
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
