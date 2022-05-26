#include"Lib.h"


int main() {
	std::cout << "Github/bartu247\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << " /$$$$$$$$ /$$$$$$$$  \n";
	std::cout << "| $$_____/|_____ $$   \n";
	std::cout << "| $$           /$$/   \n";
	std::cout << "| $$$$$       /$$/    \n";
	std::cout << "| $$__/      /$$/   	\n";
	std::cout << "| $$        /$$/    	\n";
	std::cout << "| $$$$$$$$ /$$$$$$$$	\n";
	std::cout << "|________/|________/	\n";

	Sleep(2000);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);

	while (true){
		TerminateProc(_break_point);
	}
	return 0;
}
