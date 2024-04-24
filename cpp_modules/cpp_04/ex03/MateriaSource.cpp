#include "MateriaSource.hpp"

// Cr resets _materias array 
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materias[i] = nullptr;
    }
}

// Deletes all Amateria objects from the _materias array
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i]) {
            delete _materias[i];
        }
    }
}

// copy cr, copies Amateria objects from _materias array
MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int i = 0; i < 4; i++) {
        if (src._materias[i]) {
            _materias[i] = src._materias[i]->clone();
        } else {
            _materias[i] = nullptr;
        }
    }
}

// Assignment operator assigns Ameterias object from the _materias array
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            if (_materias[i]) {
                delete _materias[i];
            }
            if (rhs._materias[i]) {
                _materias[i] = rhs._materias[i]->clone();
            } 
            else {
                _materias[i] = nullptr;
            }
        }
    }
    return *this;
}

// For learn the Amateria object Adds Amateria objects to the _materias array
void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] == nullptr) {
            _materias[i] = m;
            break;
        }
    }
}

// New Amateria object, Creates AMateria object based on type parameter
AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] != nullptr && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return nullptr;
}
