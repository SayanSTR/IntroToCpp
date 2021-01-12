/* 1. Write a program to compute the value of
 * D(r) = Sum[k=0 to r] (-1^k).( r!/k!)
 * Incidentally, D(r) is the number of ways in which the numbers 1 through r
 * can be arranged in a sequence such that i is never in the ith position, for
 * all i.
 */
#include <simplecpp>
main_program
{
  cout<<"Number of elements : ";
  int r, i=1; cin >> r;   // range of numbers
  double rFact=1;         // to calculate r!
  double term, result;    // store each term and add it to result

  repeat(r)               // calculate r!
  {
    rFact=rFact*i;
    i++;
  }
  cout<<"r! = "<<rFact<<endl;  // r! is needed for each term

  i=1; term=rFact; result+=term;  // initialize with values before loop i.e i=0
  repeat(r)
  {
    term = term*(-1)/i;
    result = result + term;
    i++;
    cout<<"|i : "<<i-1<<" |term : "<<term<<" |result : "<<result<<"|"<<endl;
  }

  cout<<"D("<<r<<") = Sum[k=0 to "<<r<<"] (-1^k).( "<<r<<"!/k!) =  "<<result<<endl;
}
