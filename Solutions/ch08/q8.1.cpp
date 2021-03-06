/* 1. Write a program to find ln(x) for arbitrary x using the Taylor series. Check your answer
 * by using the built in log command.
 */

#include <simplecpp>
main_program
{
    int x;//noOfTerms;
    cout<<"Value of x: "; cin>>x; cout<<"x = "<<x<<endl;
    //cout<<"No of terms to use: "; cin>>noOfTerms; cout<<"No of terms: "<<noOfTerms<<endl;
    double term=(x+1)*1.0/(x-1), prevSum=term, multiplier=1/(term*term), sum=0;
    cout<<"1\t"<<term<<"\t"<<sum<<endl;
    for(int i=1; sum-prevSum!=0; i++)
    {
        prevSum=sum;
        term = term*multiplier;
        sum = sum+term/(2*i-1);
        cout<<"i:"<<i<<"   term:"<<term/(2*i-1)<<"   prevSum:"<<prevSum<<"   sum:"<<sum<<"   diff:"<<sum-prevSum<<endl;

    }
    sum*=2;
    cout<<"ln("<<x<<") = "<<sum<<endl;
    cout<<"ln("<<x<<") by C++ function = "<<log(x)<<endl;
}