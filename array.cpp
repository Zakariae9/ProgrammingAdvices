#include "Course5.h"


int	NegativeCount(int arr[100], int arrLength)
{
	return arrLength - PositiveCount(arr, arrLength);
}

int	PositiveCount(int arr[100], int arrLength)
{
	int Counter = 0;
	for (int i =0; i < arrLength; i++)
	{
		if (arr[i] >= 0)
			Counter++;
	}
	return Counter;
}

int	EvenCount(int arr[100], int arrLenght)
{
	return (arrLenght - OddCount(arr, arrLenght));
}

int	OddCount(int arr[100], int arrLength)
{
	int	Counter = 0;
	int	TempArr[100];
	int	TempLen = 0;

	CopyOnlyOddNumbersToArrayWithAddNumberToArray(arr, TempArr, arrLength, TempLen);
	for (int i =0; i < TempLen; i++)
		Counter++;
	return (Counter);
}

bool	isPalindromeArray(int arr[100], int arrLength)
{
	int	Half = arrLength / 2;

	for (int i = 0; i <= Half; i++)
	{
		if (arr[i] != arr[arrLength - i - 1])
			return (0);
	}
	return (1);
}

void	FillArrayWithDistinctNumbers(int SrcArr[100], int DestArr[100], int SrcLength, int &DestLenght)
{
	for (int i =0; i < SrcLength; i++)
	{
		if (FindNumberPositionInArray(DestArr, DestLenght, SrcArr[i]) == -1)
			AddNumberToArray(DestArr, DestLenght, SrcArr[i]);
	}
}

void	CopyOnlyPrimeNumbersToArray(int arrSrc[100], int arrDest[100], int SrcLenght, int &DestLenght)
{
	for (int i =0; i < DestLenght; i++)
	{
		if (CheckPrime(arrSrc[i]) == enPrimeNotPrime::Prime)
			AddNumberToArray(arrDest, DestLenght, arrSrc[i]);
	}
}

void	CopyOnlyOddNumbersToArrayWithAddNumberToArray(int arrSrc[100], int arrDest[100], int SrcLength, int &DestLenght)
{
	for (int i =0; i < SrcLength; i++)
	{
		if (arrSrc[i] & 1)
			AddNumberToArray(arrDest, DestLenght, arrSrc[i]);
	}
}

void	CopyArrayWithAddArrayElemnts(int SrcArr[100], int DestArr[100], int SrcLength, int &DestLength)
{
	int	i = 0;

	for (int i = 0; i < SrcLength; i++)
		AddNumberToArray(DestArr, DestLength, SrcArr[i]);
}

void	InputUserNumberInArray(int arr[100], int &arrLength)
{
	int		Number;
	bool	AddMore = true;

	do 
	{
		Number = ReadPositiveNumber("Please enter a number?");
		AddNumberToArray(arr, arrLength, Number);
		
		cout << "Do you want to add more number? [0]:No, [1]:Yes\n";
		cin >> AddMore;
	}while (AddMore);
}

void	AddNumberToArray(int arr[100], int &arrLength, int Number)
{
	arr[arrLength] = Number;
	arrLength++;
}

bool	isTherNumberInArray(int arr[100], int arrLenght, int Number)
{
	return (FindNumberPositionInArray(arr, arrLenght, Number) != 0);
}

short	FindNumberPositionInArray(int arr[100], int arrLength, int Number)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return (i);
	}
	return (-1);
}

void	PrintArrayKeys(string arrKeys[], int arrLength)
{
	for (int i =1; i <= arrLength; i++)
	{
		cout << "Array [" << i-1 <<"] : " << arrKeys[i-1]<< endl;
	}
}

void	FillArrayWithKeys(string arr[], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateKey();
}

void	CopyArrayInReverseOrder(int arrSrc[], int arrDest[], int arrLength)
{
	for (int i = 0; i <= arrLength - 1; i++)
		arrDest[i] = arrSrc[arrLength - i -1];
}

void	SwapNumbers(int &N1, int &N2)
{
	int	Temp;

	Temp = N1;
	N1 = N2;
	N2 = Temp;
}

void	ShuffleArray(int arr[], int arrLength)
{
	int	Random = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Random = RandomNumber(i, arrLength-1);
		SwapNumbers(arr[i], arr[Random]);
	}
}

void	SumOf2Arrays(int arr1[], int arr2[], int arrSum[], int arrLength)
{
	for (int i = 0; i <= arrLength; i++)
		arrSum[i] = arr1[i] + arr2[i];
}

void	CopyOnlyPrimeInArray(int ArrSrc[], int ArrDest[], int &arrLength)
{
	int	j = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(ArrSrc[i]) == enPrimeNotPrime::Prime)
			ArrDest[j++] = ArrSrc[i];
	}
	arrLength = j;
}

void	CopyArray(int ArrSrc[], int ArrDest[], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		ArrDest[i] = ArrSrc[i];
}

float	AverageArray(int arr[], int arrLength)
{
	return (float)SumArray(arr, arrLength) / arrLength;
}

int	SumArray(int arr[], int arrLength)
{
	int	Sum = 0;

	for (int i = 0; i < arrLength; i++)
		Sum += arr[i];
	
	return (Sum);
}

int	MaxNumberInArray(int arr[], int arrLength)
{
	int Max = arr[0];

	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Max < arr[i])
			Max = arr[i];
	}
	return (Max);
}

int	MinNumberInArray(int arr[], int arrLength)
{
	int Min = arr[0];

	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (arr[i] < Min)
			Min = arr[i];
	}
	return (Min);
}

void	FillArrayWith1ToN(int arr[], int To)
{
	for (int i = 0; i < To; i++)
		arr[i] = i +1;
}

void	FillArrayWithRandomNumber(int arr[], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(-100, 100);
}

void	ReadArray(int &arrLength, int arr[])
{
	cout << "How many elements you want!\n";
	cin >> arrLength;

    cout << "Enter array elements:\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i+1 << "]: ";
        cin >> arr[i];
    }
}

int	TimesRepeate(int arr[], int NumToCheck, int arrLength)
{
	int	Counter = 0;
	
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == NumToCheck)
			Counter++;
	}
	return (Counter);
}

void    PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
