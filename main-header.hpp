// inclusion of libraries
	#include <iostream>
	#include <string>



void cls() {		// cls, clear screen -	derived from system("cls")

	/*	string of special characters that will translate to a clear screen command in the console. should work on any OS.	*/
	std::cout	<< "\033[2J\033[1;1H";
	/**/

}


void pause() {		// 						derived from system("pause")

	/*	use this block to pause progress in console, unpauses on pressing any button input.	*/
	std::cin.ignore();	// may not always be necessary. in that case, use 'cin.get();' instead of 'pause();'.
	std::cin.get();
	/**/

}


bool queryRestart() {

	std::string	restartOperator = "0";
		// default value tries to prevent do-while loop from repeating in case of unexpected error

	std::cout	<< "\n\n restart? (0/1): ";
	std::cin	>> restartOperator;

	if		(	restartOperator == "1"
			||	restartOperator == "y"		||	restartOperator == "Y"
			||	restartOperator == "t"		||	restartOperator == "T"
			||	restartOperator == "true"	||	restartOperator == "not false")
		return true;
	else
		return false;

}
