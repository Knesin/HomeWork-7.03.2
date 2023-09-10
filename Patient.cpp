#include "Patient.h"

void Patient::warning(const std::string& message) const {
	for (const auto& ob : observers_) {
		ob->onWarning(message);
	}
}

void Patient::error(const std::string& message) const {
	for (const auto& ob : observers_) {
		ob->onError(message);
	}
}

void Patient::fatalError(const std::string& message) const {
	for (const auto& ob : observers_) {
		ob->onFatalError(message);
	}
}

void Patient::addObserver(Observer* observer) {
	observers_.push_back(observer);
}

void Patient::removeObserver(Observer* observer) {
	auto it = std::remove(observers_.begin(), observers_.end(), observer);
	observers_.erase(it, observers_.end());
}