#include <iostream>



int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " [js dll file name]";
		return -1;
	}

	const std::string dllname = argv[1];
	
	return 0;
}

