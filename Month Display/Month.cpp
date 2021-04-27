#include <iostream>
#include<conio.h>
#include <iomanip>
using namespace std;

int main()
{
    system("color 2E");
    cout << setw(5) << "Sl. No:" << setw(15) << "Month" << setw(15) << "Name" << endl << endl;
    cout << setw(5) << 1 << setw(15) << "January" << setw(15) << "Abhilash" << endl;
    cout << setw(5) << 2 << setw(15) << "Februaury" << setw(15) << "Anandan" << endl;
    cout << setw(5) << 3 << setw(15) << "March" << setw(15) << "Abhilash" << endl;
    cout << setw(5) << 4 << setw(15) << "April" << setw(15) << "Anandan" << endl;
    getch();
}