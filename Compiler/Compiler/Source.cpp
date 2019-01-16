#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
	
	if(argc <= 1){ std::cerr << "File not specified.\n"; return -1; }

	std::ifstream ifs(argv[1]);
	if(!ifs){ std::cerr << "Failed to open file.\n"; return -1; }

	size_t i = 1;
	std::string cline;
	while(std::getline(ifs, cline)) {
		std::cout << i << "\t" << cline << "\n";
		i++;
	}

	return 0;
}
