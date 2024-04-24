#include "Character.hpp"

//Cr starts Amateria array and character's name
Character::Character(std::string const & name) :
    _name(name)
{
    for (int i = 0; i < 4; i++) {
        _inventory[i] = nullptr;
    }
}


Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != nullptr) {
            delete _inventory[i];
        }
    }
}

//Copy constructor
Character::Character(Character const & src)
{
    *this = src;
}

// Assignment operator assigns another character object
Character& Character::operator=(const Character& rhs)
{
    if (this == &rhs) 
    {
        return *this;
    }

    _name = rhs._name;

    for (int i = 0; i < 4; i++) 
    {
        if (_inventory[i] != nullptr) 
        {
            delete _inventory[i];
            _inventory[i] = nullptr;
        }
        if (rhs._inventory[i] != nullptr) 
        {
            _inventory[i] = rhs._inventory[i]->clone();
        }
    }

    return *this;
}


//Name getter
std::string const & Character::getName() const
{
    return _name;
}

// Amateria object adding function
void Character::equip(AMateria* m)
{
    if (m == nullptr) 
    {
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == nullptr)
        {
            _inventory[i] = m;
            return;
        }
    }
}

//opposite of equip
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr) {
        return;
    }
    _inventory[idx] = nullptr;
}


// Amateria object using function
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr) {
    return;
    }
    _inventory[idx]->use(target);
}