#include "Course5.h"

short   LastDigit(int &Number)
{
    int Remainder = Number % 10;
    Number /= 10;
    return (Remainder);
}

void    PrintDigits(int Number)
{
    while (Number > 0)
        cout << LastDigit(Number)<< endl;
}

int SumOfDigits(int Number)
{
    int Sum = 0;

    while (Number > 0)
        Sum += LastDigit(Number);
    return (Sum);
}

int ReversedNumber(int Number)
{
    int NewNumber = 0;

    while (Number > 0)
    {
        NewNumber = NewNumber *10 + LastDigit(Number);
    }
    return NewNumber;
}

void    PrintSumDigits(int Number)
{
    cout << "Sum of digits = " << SumOfDigits(Number);
    cout << endl;
}

int DigitFrequency(int Number, short Digit)
{
    int Counter = 0;

    while (Number > 0)
    {
        if (LastDigit(Number) == Digit)
            Counter++;
    }
    return (Counter);
}

void    PrintAllFrequencyDigitsInNumber(int Number)
{
    short   NumOfDupliations;

    for (short i = 0; i<= 9; i++)
    {
        NumOfDupliations = DigitFrequency(Number, i);

        if (NumOfDupliations > 0)
            cout << "Digit " << i << " Frequency is " << NumOfDupliations << " Time(s)\n";
    }
}