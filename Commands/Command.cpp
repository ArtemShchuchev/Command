#include "Command.h"

void print2console::print(const std::wstring& message)
{
	std::wcout << message << "\n";
}

print2file::print2file(const std::string& filename)
{
	fout.open(filename, std::ios_base::app);
}

void print2file::print(const std::wstring& message)
{
	if (fout.is_open()) fout << wide2utf(message) << std::endl;
}
