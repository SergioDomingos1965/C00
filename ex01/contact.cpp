    #include "inc.hpp"

    void Contact::set_contact(std::string name, std::string l_name, std::string nick_name, std::string phone, std::string secret)
    {
        this->first_name = name;
        this->last_name = l_name;
        this->nick_name = nick_name;
        this->phone_number = phone;
        this->darkes_secret = secret;
    }

    void Contact::get_contact(void)
    {
        std::cout<<"First Name:   "<< this->first_name<<std::endl;
        std::cout<<"Last Name:   "<< this->last_name<<std::endl;
        std::cout<<"Nick Name:   "<< this->nick_name <<std::endl;
        std::cout<<"Phone Number:   "<< this->phone_number<<std::endl;
        std::cout<<"Darkest Secret:   "<< this->darkes_secret<<std::endl;
    }

    std::string Contact::get_first_name()
    {
        return this->first_name;
    }

    std::string Contact::get_last_name()
    {
        return this->last_name;
    }

    std::string Contact::get_nick_name()
    {
        return this->nick_name;
    }