#include <iostream>
#include <vector>

void findBiggestNumber();

int myArray[] = {6, 3, 3, 58};

//Første oppgave fra meisam.
//	index		 0	1  2  3

// ----- find value
//				 ^	^  ^  ^


int main() {
			
	findBiggestNumber();
	
			return 0;
}


void findBiggestNumber() { 
	
	/*int k{};*/

	int max = 0;
	//	index			  0	 1  2  3
	//	int myArray[] = { 1, 3, 2, 4 };


	for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++) {

		//std::cout << myArray[i];

		if (myArray[i] > max) {

			max = myArray[i];

		}

	}

	std::cout << max;

}
