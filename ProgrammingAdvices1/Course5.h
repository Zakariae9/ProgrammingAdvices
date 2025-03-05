# ifndef	COURSE5_H
# define	COURES5_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum    enPrimeNotPrime {NotPrime, Prime};

enPrimeNotPrime CheckPrime(int Number);
int				ReadPositiveNumber(string message);
void	        PrintAllPrimeNumbersFrom1ToN(int Number);
void	        PrintIsPerfectNumber(int Number);
bool            isPerfectNumber(int Number);
void	        PrintAllPerfectNumbersFrom1ToN(int Number);
void            PrintDigits(int Number);
short           LastDigit(int &Number);
int             SumOfDigits(int Number);
void            PrintSumDigits(int Number);
int             ReversedNumber(int Number);
int             DigitFrequency(int Number, short Digit);
void            PrintAllFrequencyDigitsInNumber(int Number);

#endif