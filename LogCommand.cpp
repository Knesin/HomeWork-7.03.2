#include "LogCommand.h"

void LogConsol::print(const std::string& message){
    std::cout << message << std::endl;
};

LogFile::LogFile(std::string file) :file_(file) {};

void LogFile::print(const std::string& message){
    std::ofstream f(file_, std::ios::app);
    f << message << std::endl;
    f.close();
};
