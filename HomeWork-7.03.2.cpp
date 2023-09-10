#include <iostream>
#include <string>
#include "LogCommand.h"
#include "Observer.h"
#include "Patient.h"

int main()
{
    std::string log_file = "log.txt";
    //LogConsol lc;
    //LogFile lf(log_file);
    //print(lc);
    //print(lf);
    Patient pac1;
    ErrorObserver erro;
    WarningObserver waro;
    FatalErrorObserver feo;
    pac1.addObserver(&erro);
    pac1.addObserver(&waro);
    pac1.addObserver(&feo);

    pac1.warning("Kha, Kha");
    pac1.error("AAAAAAAAAA!!!");
    pac1.fatalError("I am fatal!");
}