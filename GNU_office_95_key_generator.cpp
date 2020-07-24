#include <iostream>
#include <cstdlib>
#include <ctime>

int main (int argc, char *argv[])
{
	if (argc == 1)
		argv[1] = "1";

	std::cout << argv[1] << " keys for Microsoft Office 95" << std::endl;
	srand(time(0));

	int key_p2[7];
	int valid = 0;

	int i;

	for (int u = 0; u < atoi(argv[1]); u++){
		for(i = 0; i < 3; i++)
			std::cout << rand() % 10;

		do{
			valid = 0;
			for (i = 0; i < 7; i++)
			{
				key_p2[i] = rand() % 10;
				valid += key_p2[i];
			}
		}while (valid % 7 != 0);

		std::cout << "-";
		for (i = 0; i < 7; i++)
			std::cout << key_p2[i];
		std::cout << std::endl;
	}
	return 0;
}
