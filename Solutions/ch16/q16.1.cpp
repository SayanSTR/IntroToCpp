#include <iostream>
using namespace std;

class polynomial
{
private:
    int degree=0;
    double coeff[101]={0};
public:
    //Constructor
    polynomial();
    ~polynomial();

    //Functions
    //Read polynomial coeffs
    void read() {
        unsigned short int d;
        cout<<"--Reading polynomial--\nGive degree of polynomial(degree<=100): "; cin>>d;
        if(d>100){
            cout<<"INVALID INPUT! (Degree must be 100 or lower)\n";
            return;
        }
        cout<<"\nGive coefficients of elements from highest degree to 0.\n";
        for(short int i=d; i>=0; i--) {
            cout<<"\ncoefficient of x^"<<i<<" : "; cin>>coeff[i];
        }
        cout<<"\n--Reading data complete--\n";
    //end of read()
    }

    //Print polynomial
    void print() {
        cout<<"--Printing polynomial--\n";
        for (size_t i = degree; i >= 0; i--)
        {
            if(coeff[i]>0) cout<<"+";
            cout<<coeff[i]<<" x^"<<i<<" ";
        }
        cout<<endl;
    //end of print()
    }

    double value(double realNum) {
        //
        double value=0.0;
        for (size_t i = 0; i <= degree; i++)
        {
            value += coeff[i]*realNum;
        }
        cout<<"\value = "<<value<<endl;
        return value;
    }

    friend ostream& operator<<(ostream & ost, polynomial poly) {

    }
};



void printMenu() {
    cout<<
    "++ Choose an option ++"<<
    "\n-(R): Read polynomial coefficients"<<
    "\n-(P): Print the Polynomial"<<
    "\n-(V): Print value of polynomial for value of x"<<
    "\n-(X): Quit\n";
}

//Main driver
int main()
{
    char choice;
    while (true)
    {
        printMenu(); cin>>choice;
    }
    


}