#include "RPN.hpp"

int	main(int argc, char *argv[]) {
	if (argc == 2) {
		try {
			RPN expression(argv[1]);
			std::cout << expression;
		} catch (RPN::InvalidExpressionException &error) {
			std::cout << "Error:" << error.what();
		}
	}
	std::cout << std::endl;
	return (0);
}