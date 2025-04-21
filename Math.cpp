#include "Course5.h"

float	Mysqrt(float Number)
{
	return pow(Number, 0.5);
}

int		MyCeil(float Number)
{
	int	Floor = floor(Number);
	if (Floor == Number)
		return Number;
	return Floor + 1;
}

int		MyFloor(float Number)
{
	if (GetFractionPart(Number) == 0 || Number >= 0.1)
		return Number;
	return Number - 1;
}

float	GetFractionPart(float Number)
{
	return Number - int(Number);
}

int	Myround(float Number)
{
	int		IntPart;
	float	FractionPart;

	IntPart = Number;
	FractionPart = GetFractionPart(Number);
	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
	return IntPart;
}

float	Myabs(float Number)
{
	return (Number < 0)? Number * -1: Number;
}