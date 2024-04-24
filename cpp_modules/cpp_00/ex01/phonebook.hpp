#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#define _string std::string
#include <iostream>
#include "contact.hpp" //class contact must stand for a phonebook contact.
#include <iomanip>
#include <sstream>
#

class PhoneBook{
    private:
        Contact contacts[8];
        int index;
    public:
        PhoneBook();
        void add_contact();
        void search_contacts();
};


#endif