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
		case enCharType::CapetalLatter:
			return (char) RandomNumber(65, 90);
		case enCharType::Digit:
			return (char) RandomNumber(48, 57);
		case enCharType::SmallLetter:
			return (char) RandomNumber(97, 122);
		default:
			return (char)RandomNumber(33,47);
	}
}

string	RandomLatters()
{
	string	Word = "";

	Word = GetRandomChar(enCharType::CapetalLatter);
	Word += GetRandomChar(enCharType::CapetalLatter);
	Word += GetRandomChar(enCharType::CapetalLatter);
	Word += GetRandomChar(enCharType::CapetalLatter);
	
	return (Word);
}

string	GenerateKey()
{
	string	Key = "";

	for (int i =1; i <= ; i++)
		Key += RandomLatters() + '-';
	key += RandomLatters();
	return Key;
}

void	PrintKeys(int KeysNumber)
{
	for (int i =1; i <= KeyNumber; i++)
	{
		cout << "Key [" << i"] : " << GenerateKey()<< endl;
	}
}
