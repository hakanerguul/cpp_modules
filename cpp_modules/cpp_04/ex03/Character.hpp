#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

//Character inherits from Icharacter
class Character : public ICharacter
{
    private:
        std::string _name; 

        AMateria* _inventory[4]; 
        //Max 4 Amateria objects 
    
    public:
        
        Character(std::string const & name);
        
        
        ~Character();
        
        
        Character(Character const & src);
        
        
        Character & operator=(Character const & rhs);
    
        // using of the functions from the interface of ICharacter
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};


#endif