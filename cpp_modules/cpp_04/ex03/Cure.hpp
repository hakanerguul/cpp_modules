#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const & src);
        Cure & operator=(Cure const & rhs);
        virtual AMateria* clone() const;
        //Applies the clone function from the Amateria class
        virtual void use(ICharacter& target);
};

#endif