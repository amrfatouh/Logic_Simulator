#include "Simulator.h"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout << "ERROR!" << endl;
		return 0;
	}
	Simulator s;
	s.load(argv[1]);
	system("pause");

	return 0;
}

/*
-how to pass an argument with mouse double click
	=> open the text file (u need to pass as argument) with the (.exe) file of your project
-you can name the text file and put any extension to it (not just .txt) and you can make the (.exe) file of your project the deafault lancher for this type of files
-to use the program:
	-make a text file that contains the suitable commands
	-open the file using the .exe file

-concepts learned:
==================
-dealing with pointers
-classes in separate files

notes on using:
===============
-you should enter the value needed to be inverted by NOT Gate into its two legs
-the file circuit.cir is passed when debugging as a parameter to main() function
-when you open a file with this program (the .exe file), it's passed as a parameter instead
*/