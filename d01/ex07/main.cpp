
#include <iostream>
#include <fstream>

std::string fn_replece(std::string line, std::string s1, std::string s2) {
	int			start = 0;
	size_t		size = s1.size();
	std::string result = line;
	while ((start = result.find(s1)) != -1){
		result.replace(start, size, s2);
	}
	return (result);
}

int		main(int argc, char **argv) {

	if (argc != 4) {
		std::cout << "Usage: please, give exactly 3 parameters: filename, string to replace and string with replace" << std::endl;
		return (1);
	}

	std::string path = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream src_file;
 	std::ofstream save_file;
 	std::string line;

  	if (s1.empty() || s2.empty()) {
		std::cout << "Sorry, s1 and/or s2 are empty" << std::endl;
		return (1);  		
  	}

	src_file.open(path, std::ios::in);
	if (!src_file.is_open()) {
		std::cout << "Such file does not exist" << std::endl;
		return (1);
	}

  	save_file.open(path + ".replace", std::ios::out | std::ios::trunc);
  	if (!save_file.is_open()) {
		std::cout << "Sorry, couldn't create resulting file" << std::endl;
		return (1);  		
  	}

  	while (std::getline(src_file, line)) {
  		save_file << fn_replece(line, s1, s2);
  		if (!src_file.eof())
			save_file << std::endl;
  	}

  	src_file.close();
  	save_file.close();
  	return (0);
}