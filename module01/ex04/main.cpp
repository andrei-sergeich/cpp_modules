#include <iostream>
#include <string>
#include <fstream>

void	findAndReplace(std::ifstream &fileIn, std::ofstream &fileOut,
					   std::string &to_find, std::string &to_replace)
{
	std::string	strInput;
	size_t		begin;
	size_t		res;

	while (std::getline(fileIn, strInput)) // while (f_in.eof)
	{
		begin = 0;
		while ((res = strInput.find(to_find, begin)) != std::string::npos)
		{
			strInput.erase(res, to_find.size());
			strInput.insert(res, to_replace);
			begin = res + to_replace.size();
		}
		fileOut << strInput << std::endl;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "usage: ./replace <filename> <s1> <s2>" << std::endl;
	else
	{
		std::string	fileIn = argv[1];
		std::string	fileOut = fileIn + ".replase";
		std::string	to_find = argv[2];
		std::string	to_replace = argv[3];

		if (to_find.empty() || to_replace.empty())
		{
			std::cout << "s1 or s2 can't be empty" << std::endl;
			return 1;
		}

		std::ifstream	inStm;
		inStm.open(fileIn.c_str());
		if (!inStm.is_open())
		{
			std::cerr << fileIn << " could not be opened for reading!" << std::endl;
			return 1;
		}

		std::ofstream	outStm;
		outStm.open(fileOut.c_str());
		if (!outStm.is_open())
		{
			std::cerr << outStm << " could not be opened for writing!" << std::endl;
			inStm.close();
			return 1;
		}

		findAndReplace(inStm, outStm, to_find, to_replace);

		inStm.close();
		outStm.close();
	}
	return 0;
}
