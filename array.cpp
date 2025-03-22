#include "Course5.h"

int	PositionNumberInArray(int arr[100], int arrLength, int Number)
{
	int	Pos = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return (Pos);
		Pos++;
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
		arr[i] = RandomNumber(1, 100);
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
