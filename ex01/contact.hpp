#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "inc.hpp"

class  Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkes_secret;
    public:
        void set_contact(std::string name, std::string l_name, std::string nick_name, std::string phone, std::string secret);
        void get_contact(void);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
};
#endif