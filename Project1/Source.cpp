//my file
#include<iostream>
#include<fstream>
#include<string>
//int main() {
//	std::ofstream outputFile;
//	outputFile.open("example file.txt");
//	outputFile << "I can write to a file! \n";
//	outputFile << "This is interesting :D";
//	outputFile.close();

int main() {
	std::ifstream input_file;
	std::string filename = "commaSeparatedValues.txt";
	input_file.open(filename);
	if (!input_file) {
		std::cout << "Uh-oh, file not found. \
			Ensure file is in project directory" << std::endl;
	}
	else {
		std::string fileData = "";
		while (getline(input_file, fileData, ',')) {
			std::cout << fileData << std::endl;
		}
		input_file.close();
		return 0;
	}
}