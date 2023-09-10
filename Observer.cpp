#include "Observer.h"

void ErrorObserver::onError(const std::string& message) {
	logf_.print("Error: " + message);
}

void WarningObserver::onWarning(const std::string& message) {
	logc_.print("Warrning: " + message);
}

void FatalErrorObserver::onFatalError(const std::string& message) {
	logc_.print("Fatal Error: " + message);
	logf_.print("Fatal Error: " + message);
}