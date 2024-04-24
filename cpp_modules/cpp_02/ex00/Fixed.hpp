#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    static const int    frac_bits;
    int                 value;
public:
    Fixed();
    Fixed(const Fixed& item);
    ~Fixed();

    Fixed &operator=(const Fixed &right);
    
    int     getRawBits()const;
    void    setRawBits(const int raw);
};

#endif