/* 
 * 9. Consider a circuit in which a voltage source of Vcc = 1.5 volts is applied to a diode
 * and a resistance of R = 1 Ohm connected in series, Figure 8.4. The current I through
 * a diode across which there is a potential drop of V is
 * I = Is[{e^(V/n.Vt)}-1]
 * where Is is the reverse saturation current of the diode, Vt is the thermal voltage which
 * is about 25 mV at room temperature (300 Kelvin), and n is the ideality factor. Suppose
 * the diode we are using has n = 1 and Is = 30 mA. Write a program that finds the
 * current. Use your program to also find the current when the voltage source is reversed.
 */

#include <iostream>
#include <math.h>
using namespace std;
double diodeCurrent(double source_voltage=1.5, double resistance=1.0, double reverse_saturation=0.030, double thermal_voltage=0.025, double ideality_factor=1, bool voltage_reversed=false)
{
    // Diode properties
    double V=source_voltage, R=resistance, Is=reverse_saturation, Vt=thermal_voltage, n=ideality_factor, I=0;
    bool reversed=voltage_reversed; // !! not implemented yet !!
    // I = Is[ {e^( V/(n.Vt))} -1]
    {
        double power=V/(n*Vt), term=1.0, sum=term, prevSum=0;
        for(int i=1; sum!=prevSum; i++)
        {
            prevSum=sum;
            term *= 1.0*power/i;
            sum += term;
        }
        I = Is * (sum - 1);
    }
    cout << "Current through diode = "<< I<<endl;
    return I;
}

int main()
{
    double V=1.5, R=1.0, Is=0.030, Vt=0.025, n=1, I=0;
    I = Is * ( exp( V/(n*Vt)));
    diodeCurrent();
    cout<<"By inbuilt function I = "<<I<<endl;
}