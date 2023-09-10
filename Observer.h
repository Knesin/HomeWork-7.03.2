#pragma once
#include <string>
#include "LogCommand.h"

class Observer {
public:
    virtual void onWarning(const std::string& message) {}
    virtual void onError(const std::string& message) {}
    virtual void onFatalError(const std::string& message) {}
protected:
    LogConsol logc_;
    LogFile logf_{ "log.txt" };
};

class ErrorObserver :public Observer{
public:
    void onError(const std::string& message) override;
};

class WarningObserver :public Observer {
public:
    void onWarning(const std::string& message) override;
};

class FatalErrorObserver :public Observer {
public:
    void onFatalError(const std::string& message) override;
};