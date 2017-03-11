#include <iostream>
using namespace std;

int main()
{
    char choice = ' ';
    cout << "What is your choice?" << endl;
    cin >> choice;

 /*There should be an'and' operator instead of 'or'.*/
    while (choice != 'y' && choice != 'n')
    {
        cout << "Invalid try again: ";
        cin >> choice;
    }

    cout << "Choice was: " << choice << endl;

    return 0;
}
