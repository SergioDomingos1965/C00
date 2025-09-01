#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "inc.hpp"
#include "contact.hpp"
    class Phonebook
    {
        private:
            Contact contacto[8];
            int index;
            int i;
        public:
            Phonebook();
            void add_contact();
            void search_contact();
            void search_index(int i);
    }; 
#endif 