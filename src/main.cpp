#include <iostream>
#include <string>

#include "../headers/genericFunctions.hpp"


using std::cout;
using std::cin;

using std::string;




int main()
{
	bool restartOperator = true;

	while (restartOperator == true)
	{
		restartOperator = false;
		printHeader();


		//=== example block
		//local variable declaration

		cout << " test 1 ... ";
		cout << " \n";

		cout << " test 2 ... "
			 << " \n";

		cout
		<< " \n"
		<< " test 3 ... "
		<< " \n";


		//=== end block
		restartOperator = queryRestart();
		clearScreen();
	}

	return 0;
}
