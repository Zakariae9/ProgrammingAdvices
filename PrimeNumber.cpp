#include "Course5.h"

enPrimeNotPrime	CheckPrime(int Number)
{
	int	M = round(Number / 2);
	for (int i=2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void	PrintAllPrimeNumbersFrom1ToN(int Number)
{
	cout << "\n";
	cout << "All Numbers from 1" << " to "<< Number<< endl;
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i))
			cout << i << endl;
	}
}