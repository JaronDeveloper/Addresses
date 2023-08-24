#include <fstream>

int main() {
	std::string* city; std::string* street; int* numberHouse; int* numberApartment;
	int sizeAmount,counter=0;
	std::ifstream finIn("in.txt");
	finIn >> sizeAmount;
	city = new std::string[sizeAmount];
	street = new std::string[sizeAmount];
	numberHouse = new int[sizeAmount];
	numberApartment = new int[sizeAmount];

	while (sizeAmount > counter)
	{
		finIn >> city[counter];
		finIn >> street[counter];
		finIn >> numberHouse[counter];
		finIn >> numberApartment[counter];

		counter++;
	}

    finIn.close();
	std::ofstream finOut("out.txt");
	finOut << sizeAmount;
	finOut << std::endl;

	for (int i = sizeAmount-1;i >= 0;i--) {
		finOut << city[i];
		finOut << " ";
		finOut << street[i];
		finOut << " ";
		finOut << numberHouse[i];
		finOut << " ";
		finOut << numberApartment[i];
		finOut << std :: endl;		
	}	
	finOut.close();
	delete[] city, street, numberHouse, numberApartment;

	return 0;
}