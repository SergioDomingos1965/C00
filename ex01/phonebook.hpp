#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "inc.hpp"
#include "contact.hpp"
    class Phonebook
    {
        private:
            Contact contacto[8];
        public:
            void add_contact();
            void search_contact();
    }; 


    
#endif 