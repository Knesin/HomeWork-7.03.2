#pragma once
#include <iostream>
#include <string>
#include <fstream>

class LogCommand {
public:
    virtual ~LogCommand() = default;
    virtual void print(const std::string& message) = 0;
};

class LogConsol : public LogCommand {
public:
    void print(const std::string& message) override;
};

class LogFile : public LogCommand {
public:
    LogFile(std::string file);
    void print(const std::string& message) override;
private:
    std::string file_;
};
