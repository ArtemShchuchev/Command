#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "SecondaryFunction.h"

class LogCommand
{
public:
    virtual ~LogCommand() = default;
    virtual void print(const std::wstring& message) = 0;
};


class print2console : public LogCommand
{
private:
public:
    void print(const std::wstring& message) override;
};

class print2file : public LogCommand
{
private:
    std::ofstream fout;
public:
    print2file(const std::string& filename);
    void print(const std::wstring& message) override;
};
