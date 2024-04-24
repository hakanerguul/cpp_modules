# include "MutantStack.h"

int main()
{
	MutantStack<int> mstack;
	mstack.push(11);
	mstack.push(22);
	std::cout << " mstack.top() => " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size() => " << mstack.size() << std::endl;
	mstack.push(33);
	mstack.push(44);
	mstack.push(55);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "[" << *it << "]" << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}