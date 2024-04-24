# include "Span.h"

int main ()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
  return 0;
}

/*#include <iostream>
#include <cstdlib> // rand() fonksiyonu için

int main() {
    try {
        Span span(10000);
        // 10.000 rasgele sayıyı Span sınıfına ekleyelim
        for (int i = 0; i < 10000; i++) {
            int randomNum = rand(); 
            span.addNumber(randomNum);
        }

       
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "En kısa aralık: " << shortest << std::endl;
        std::cout << "En uzun aralık: " << longest << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Hata: " << e.what() << std::endl;
    }

    return 0;
}
*/