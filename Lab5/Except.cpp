#include <iostream>

class MyException : public std::exception {
public:
	enum errors {
		BIG,
		Negative
	};
	errors err;
	MyException(errors err) : err(err) {}

	const char* what() const throw() override{
		if (err == errors::BIG) return "BIG";
	}
};