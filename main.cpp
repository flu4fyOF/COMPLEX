#include "stdafx.h"
#include <iostream>
#include "complex.h"

using namespace std;


int main()
{
	int select = 0;
	Complex c1, c2, c3;

	print_menu(select);
	cin >> select;

	switch (select)
	{
	case 1:
		ComplexCreate(c1);
		c3 = complexSum(&c1, &c2);
		break;

	case 2:
		break;

	case 3:
		break;

	case 4:
		break;

	case 5:
		break;

	default:
		print_error();
		break;
	}

	system("pause");
}




