#include <iostream>
#include <fstream>

int main() {
	std::string city; std::string street; int numberHouse; int numberApartment;
	int amount,counter=0;
	std::ifstream finIn("in.txt");
	finIn >> amount;
	std::ofstream finOut("out.txt");
    finOut << amount;
	finOut << std::endl;

	while (amount > counter)
	{
		finIn >> city;
		finIn >> street;
		finIn >> numberHouse;
		finIn >> numberApartment;

		finOut << city;
		finOut << " ";
		finOut << street;
		finOut << " ";
		finOut << numberHouse;
		finOut << " ";
		finOut << numberApartment;
		finOut << std :: endl;
		counter++;
	}
	finIn.close();
	finOut.close();

	return 0;
}