#include <simplecpp>
main_program
{
    int choice = 0, dec = 0, bin = 0, mul = 1, rem = 0, quo = 0;
    unsigned long long res = 0;
    while (true)
    {
        cout << "<<<<<<<<<<<<  >>>>>>>>>>>>" << endl;
        cout << "**(1) BINARY -> DECIMAL\n**(2) DECIMAL -> BINARY\n**(-1) EXIT !" << endl;
        cout << "**ENTER YOUR CHOICE: ";
        cin >> choice;
        if (choice == 1)
        {
            res = 0;
            mul = 1;
            rem = 0;
            quo = 0;
            bin = 0;
            cout << "Give binary number: ";
            cin >> bin;
            quo = bin;
            mul = 1;
            while (quo != 0)
            {
                rem = quo % 10;
                quo = quo / 10;
                res += rem * mul;
                mul *= 2;
            }
            cout << "Decimal of " << bin << " is " << res << endl;
            cout << "<<<<<<<<<<<<  >>>>>>>>>>>>" << endl;
        }
        else if (choice == 2)
        {
            res = 0;
            mul = 1;
            rem = 0;
            quo = 0;
            dec = 0;
            cout << "Give decimal number: ";
            cin >> dec;
            mul = 1, quo = dec;
            while (quo != 0)
            {
                rem = quo % 2;
                quo = quo / 2;
                res += rem * mul;
                mul *= 10;
            }
            cout << "Binary of " << dec << " is " << res << endl;
            cout << "<<<<<<<<<<<<  >>>>>>>>>>>>" << endl;
        }
        else if (choice == -1)
        {
            cout << "<<<<<<<<<<<<  >>>>>>>>>>>>" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice!" << endl;
            cout << "<<<<<<<<<<<<  >>>>>>>>>>>>" << endl;
        }
    }
}