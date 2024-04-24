#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _materias[4]; 
        // Holds Amateria objects
    public:
        MateriaSource(); 
        
        ~MateriaSource(); 
        
        MateriaSource(MateriaSource const & src); 
        
        MateriaSource & operator=(MateriaSource const & rhs); 
        
        virtual void learnMateria(AMateria* m); 
        // Pure virtual class from IMateriaSource interface
        virtual AMateria* createMateria(std::string const & type); 
        // Pure virtual class from IMateriaSource interface
};

#endif