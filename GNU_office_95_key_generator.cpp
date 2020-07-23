#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
	srand(time(0));

	int key_p1[3];
	int key_p2[7];
	int valid = 0;

	int i;

	for(i = 0; i < 3; i++)
		key_p1[i] = rand() % 10;

	do{
		valid = 0;
		for (i = 0; i < 7; i++)
		{
			key_p2[i] = rand() % 10;
			valid += key_p2[i];
		}
	}while (valid % 7 != 0);

	for (i = 0; i < 3; i++)
		std::cout << key_p1[i];
	std::cout << "-";
	for (i = 0; i < 7; i++)
		std::cout << key_p2[i];
	std::cout << std::endl;

	return 0;
}
