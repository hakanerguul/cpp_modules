#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int fractionalBits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int intVal);
		Fixed(const float floatVal);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a,const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a,const Fixed &b);

		Fixed& operator=(const Fixed& right);
		bool operator>(Fixed right) const;
		bool operator<(Fixed right) const;
		bool operator>=(Fixed right) const;
		bool operator<=(Fixed right) const;
		bool operator==(Fixed right) const;
		bool operator!=(Fixed right) const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		float operator+(Fixed right)const;
		float operator-(Fixed right)const;
		float operator*(Fixed right)const;
		float operator/(Fixed right)const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif