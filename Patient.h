#pragma once
#include <string>
#include <vector>
#include "Observer.h"

class Patient
{
public:
	void warning(const std::string& message) const;
	void error(const std::string& message) const;
	void fatalError(const std::string& message) const;
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);

private:
	std::vector<Observer*> observers_;
};

