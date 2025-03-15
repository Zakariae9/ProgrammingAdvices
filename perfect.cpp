#include "Course5.h"

bool    isPerfectNumber(int Number)
{
	int	sum = 0;

    for (int i=1; i<Number; i++)
	{
		if (Number % i == 0)
			sum+= i;
	}
	return (sum == Number);
}

void	PrintIsPerfectNumber(int Number)
{
	if (isPerfectNumber(Number))
		cout << Number << " is perfect.\n";
	else
		cout << Number << " is not perfect.\n";
}

void	PrintAllPerfectNumbersFrom1ToN(int Number)
{
	for (int i=1; i<=Number; i++)
	{
		if (isPerfectNumber(i))
			cout << i << endl;
	}
}