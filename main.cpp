#include "Course5.h"

int main()
{
	srand(time(0));
	cout << GetRandomChar(enCharType::SpecialCharacter)<< endl;
	cout << GetRandomChar(enCharType::Digit)<< endl;
	cout << GetRandomChar(enCharType::SmallLetter)<< endl;
	cout << GetRandomChar(enCharType::CapetalLatter)<< endl;
//cout << endl;
}
