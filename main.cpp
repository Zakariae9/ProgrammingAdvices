#include "Course5.h"

int main()
{
	//34
	srand(time(0));

	int		arrLength, arr[100];
	
	arrLength = ReadPositiveNumber("How many Key you want!");

	cout << "\n\nArray elements:\n";
	FillArrayWithRandomNumber(arr, arrLength);
	PrintArray(arr, arrLength);
	
	int	NumberToFound = ReadPositiveNumber("Please enter a number to search for?");
	int	Pos = PositionNumberInArray(arr, arrLength, NumberToFound);
	cout << "Number you are looking for is: "<< NumberToFound;
	if (Pos == -1)
		cout << "\nThe number is not found:-("<<endl;
	else
	{
		cout << "\nThe number found at position: "<< Pos
			<< "\nThe number found its order : " << Pos+1 << endl ;			 
	}
	
}
