#include <iostream>
#include <fstream>

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::string buf;
  	std::ifstream ifs (filename);
	if (!ifs.is_open())
	{
		std::cout << "ERROR FILESTREAM" << std::endl;
		return ;
	}
	std::string newFilename;
	newFilename = filename.substr(0, filename.find_last_of("."));
	newFilename += ".replace";
	// buf  ifs.rdbuf();
	// I NEED TO USE INSERT, REPLACE AND READ ! PERFECTOOO
  	std::ofstream ofs (newFilename);
	// while (ifs >> buf)
	// {
		// if (buf == s1)
			// ofs << s2 << " ";
		// else
			// ofs << buf << " ";
	// }
	ifs.close();
	ofs.close();
}

// filename and two strings =>
int main(int ac, char **av) {
	if (ac != 4)
	{
		std::cout << "ERROR ARGUMENT" << std::endl;
		return (1);
	}
	replace(av[1], av[2], av[3]);
	return (0);    
}