#include <iostream>
#include <cmath>
using namespace std;

class Polynomial
{
private:
    int degree = 0;
    double coeff[101] = {0};
public:
    //Constructor
    Polynomial(){};
    ~Polynomial(){};

    //Functions
    //Read polynomial coeffs
    void read() {
        unsigned short int d;
        cout<<"--Reading polynomial--\nGive degree of polynomial(degree<=100): "; cin>>d;
        if(d>100){  //assert positive input
            cout<<"INVALID INPUT! (Degree must be 100 or lower)\n";
            return;
        }
        degree = d; //assign degree
        cout<<"\nGive coefficients of elements from highest degree to 0.\n";
        for(short int i=d; i>=0; i--) {
            cout<<"coefficient of x^"<<i<<" : "; cin>>coeff[i];
        }
        cout<<"\n--Reading data complete--";
    //end of read()
    }

    //Print polynomial
    void print() {
        cout<<"--Printing polynomial--\n";

        for (int i = this->degree; i >= 0; i--)
        {
            if(coeff[i]>0) cout<<"+";
            cout<<coeff[i]<<"x^"<<i<<" ";
        }
        //cout<<endl;
    //end of print()
    }

    double value() {
        double x; cout<<"Value of x : "; cin>>x;
        double value=0.0;
        for (size_t i = 0; i <= degree; i++)
        {
            value += coeff[i]*pow(x,i);
        }
        cout<<"\vValue = "<<value<<endl;
        return value;
    }

    friend ostream& operator<<(ostream & ost, Polynomial poly) {
        int d; cin>>d;
        poly.degree = d;
        for(int d; d>=0; --d){
            cin>>poly.coeff[d];
        }
        return ost;
    }
};



void printMenu() {
    cout<<
    "\n\n++ Choose an option ++"<<
    "\n-(R): Read polynomial coefficients"<<
    "\n-(P): Print the Polynomial"<<
    "\n-(V): Print value of polynomial for value of x"<<
    "\n-(X): Exit"<<
    "\n >>> ";
}

//Main driver
int main()
{   
    Polynomial p;
    bool run = true;
    char choice;
    while (run)
    {
        printMenu(); cin>>choice;
        switch (choice)
        {
        case 'r':
        case 'R':
            p.read();
            break;
        case 'p':
        case 'P':
            p.print();
            break;
        case 'v':
        case 'V':
            p.value();
            break;
        case 'x':
        case 'X':
            run = false;
            break;
        default:
            break;
        }

    }

}