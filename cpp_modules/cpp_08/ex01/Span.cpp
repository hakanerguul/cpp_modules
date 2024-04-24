#include "Span.h"

Span::Span() {
	this->N = 0;
}

Span::Span(unsigned int n) {
	this->N = n;
	this->v.reserve(n);
}

Span::Span(const Span &var) {
	*this = var;
}

Span &Span::operator=(const Span &var) {
	if (this == &var)
		return *this;
	this->N = var.N;
	this->v = var.v;
	return *this;
}

void Span::addNumber(int number) {
	if (v.size() == this->N)
		throw vectorIsFull();
	v.push_back(number);
}

int Span::shortestSpan() {
	if (this->v.size() < 2)
		throw vectorIsTooSmall();
	std::vector<int> tmp;
	std::adjacent_difference(this->v.begin(), this->v.end(), std::back_inserter(tmp));
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), static_cast<int (*)(int)>(&std::abs));
	return *min_element(tmp.begin(), tmp.end());
}

int Span::longestSpan() {
	if (this->v.size() < 2)
		throw vectorIsTooSmall();
	std::vector<int> tmp;
	std::adjacent_difference(this->v.begin(), this->v.end(), std::back_inserter(tmp));
	std::transform(tmp.begin(), tmp.end(), tmp.begin(), static_cast<int (*)(int)>(&std::abs));
	return *max_element(tmp.begin(), tmp.end());
}

Span::~Span() {
	std::cout << "Deconst Called" << std::endl;
}