/* 10. Add checks to the GCD code to ensure that the numbers typed in by the user are
 * positive. For each input value you should prompt the user until she gives a positive
 * value.
 */

#include <simplecpp>
main_program{ // Compute GCD of m,n, where m > n >0.
    int m,n;
    cout << "Enter the larger number (must be > 0): ";
    cin >> m;
    while(m<0) 
    {
        cout<<"Invalid input!\nEnter the larger number (must be > 0): ";
        cin>>m;
    }
    cout << "Enter the smaller number (must be > 0): "; cin >> n;
    while(n<0) 
    {
        cout<<"Invalid input!\nEnter the smaller number (must be > 0): ";
        cin>>n;
    }
    while(m % n != 0){
        int Remainder = m % n;
        m = n;
        n = Remainder;
    }
    cout << "The GCD is: " << n << endl;
}
