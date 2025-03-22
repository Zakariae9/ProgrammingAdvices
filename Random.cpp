#include "Course5.h"

int	RandomNumber(int From, int To)
{
	int	Random;

	Random = From + (rand() % (To - From +1));
	return (Random);
}

char	GetRandomChar(enCharType CharType)
{
	switch (CharType)
	{
		case enCharType::CapetalLetter:
			return (char) RandomNumber(65, 90);
		case enCharType::Digit:
			return (char) RandomNumber(48, 57);
		case enCharType::SmallLetter:
			return (char) RandomNumber(97, 122);
		default:
			return (char)RandomNumber(33,47);
	}
}

string	GenerateWord(enCharType Type, int Length)
{
	string	Word = "";

	for (int i = 0; i < Length; i++)
		Word += GetRandomChar(Type);
		
	return (Word);
}

string	GenerateKey()
{
	string	Key = "";

	Key += GenerateWord(enCharType::CapetalLetter, 4) + '-';
	Key += GenerateWord(enCharType::CapetalLetter, 4) + '-';
	Key += GenerateWord(enCharType::CapetalLetter, 4) + '-';
	Key += GenerateWord(enCharType::CapetalLetter, 4);

	return Key;
}

void	PrintKeys(int KeysNumber)
{
	for (int i =1; i <= KeysNumber; i++)
	{
		cout << "Key [" << i <<"] : " << GenerateKey()<< endl;
	}
}
