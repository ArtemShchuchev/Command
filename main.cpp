//#include <cassert> // для assert()
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

int main(int argc, char** argv)
{
	printHeader(L"Задание 1. Паттерн «Команда»");
    
    
	
	std::wcout << "\n";
	return 0;
}
