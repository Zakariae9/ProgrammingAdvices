# ifndef	COURSE5_H
# define	COURES5_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cmath>

using namespace std;

enum    enPrimeNotPrime {NotPrime, Prime};
enum	enCharType {SmallLetter, CapetalLetter, SpecialCharacter, Digit,};

enPrimeNotPrime CheckPrime(int Number);
int				ReadPositiveNumber(string message);
void	        PrintAllPrimeNumbersFrom1ToN(int Number);
void	        PrintIsPerfectNumber(int Number);
bool            isPerfectNumber(int Number);
void	        PrintAllPerfectNumbersFrom1ToN(int Number);
void            PrintDigits(int Number);
short           LastDigit(int &Number);
int             SumDigits(int Number);
void            PrintSumDigits(int Number);
int             ReversedNumber(int Number);
int             DigitFrequency(int Number, short Digit);
void            PrintAllFrequencyDigitsInNumber(int Number);
int				RandomNumber(int From, int To);
char			GetRandomChar(enCharType CharType);
void			PrintKeys(int KeysNumber);
string			GenerateKey();
string			GenerateWord(enCharType Type, int Length);
void			PrintArray(int arr[], int NumElements);
int				TimesRepeate(int arr[], int NumToCheck, int NumElements);
void			ReadArray(int &NumElements, int arr[]);
void			FillArrayWithRandomNumber(int arr[], int arrLength);
int				MaxNumberInArray(int arr[], int arrLength);
int				MinNumberInArray(int arr[], int arrLength);
int				SumArray(int arr[], int arrLength);
float			AverageArray(int arr[], int arrLength);
void			CopyArray(int SrcArr[], int DestArr[], int arrLength);
void			CopyOnlyPrimeInArray(int ArrSrc[], int ArrDest[], int &arrLength);
void			SumOf2Arrays(int arr1[], int arr2[], int arrDest[], int arrLength);
void			ShuffleArray(int arr[], int arrLength);
void			FillArrayWith1ToN(int arr[], int To);
void			SwapNumbers(int &N1, int &N2);
void			CopyArrayInReverseOrder(int arrSrc[], int arrDest[], int arrLength);
void			PrintArrayKeys(string arrKeys[], int KeysNumber);
void			FillArrayWithKeys(string arr[], int arrLength);
short			FindNumberPositionInArray(int arr[100], int arrLength, int Number);
bool			isTherNumberInArray(int arr[100], int arrLenght, int Number);
void			AddNumberToArray(int arr[100], int &arrLength, int Number);
void			InputUserNumberInArray(int arr[100], int &arrLength);
void			CopyArrayWithAddArrayElemnts(int SrcArr[100], int DestArr[100], int SrcLength, int &DestLength);
void			CopyOnlyOddNumbersToArrayWithAddNumberToArray(int arrSrc[100], int arrDest[100], int SrcLength, int &DestLenght);
void			CopyOnlyPrimeNumbersToArray(int arrSrc[100], int arrDest[100], int SrcLenght, int &DestLenght);
void			FillArrayWithDistinctNumbers(int SrcArr[100], int DestArr[100], int SrcLength, int &DestLenght);
bool			isPalindromeArray(int arr[100], int arrLength);
int				OddCount(int arr[100], int arrLength);
int				EvenCount(int arr[100], int arrLenght);
int				PositiveCount(int arr[100], int arrLength);
int				NegativeCount(int arr[100], int arrLength);
float			Myabs(float Number);
int				Myround(float Number);






#endif