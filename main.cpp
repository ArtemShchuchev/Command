#include "SecondaryFunction.h"
#include "Command.h"

/*
Задание 1. Паттерн «Команда»
Пишем команды для системы логирования.

В задании нужно реализовать наследников класса:

class LogCommand {
public:
    virtual ~LogCommand() = default;
    virtual void print(const std::string& message) = 0;
};
таким образом, чтобы один наследник печатал сообщение message в
консоль, а другой умел печатать сообщение в файл, по указанному пути.

Далее нужно реализовать функцию: oid print(LogCommand&);, которая
будет выполнять команды.
*/

void print(LogCommand& log, const std::wstring& str)
{
	log.print(str);
}

int main(int argc, char** argv)
{
	printHeader(L"Задание 1. Паттерн «Команда»");
    
	std::unique_ptr<LogCommand> log = std::make_unique<print2console>();
	print(*log, L"test print to console");

	log = std::make_unique<print2file>("test.txt");
	print(*log, L"test print to file");

	
	std::wcout << "\n";
	return 0;
}
