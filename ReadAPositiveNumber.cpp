#include "Course5.h"

int	ReadPositiveNumber(string message)
{
	int	Number = 0;
	
	do
	{
		cout << message << endl;
		cin >> Number;
	}while (Number < 0);
	
	return Number;
}
