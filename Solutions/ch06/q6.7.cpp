/* 7. Write a program that takes a character as input and prints 1 if it is a vowel
 * and 0 otherwise.
 */

#include <simplecpp>
main_program
{
    char c; 
    cout<<"Enter a character : "; cin>>c;
    switch (c)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("1\n");
        break;
    default:
        printf("0\n");
        break;
    }
}
