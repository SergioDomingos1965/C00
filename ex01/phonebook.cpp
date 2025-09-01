#include "inc.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
    this->i = 0;
}

void Phonebook::add_contact()
{
    system("clear");
    std::string nome;
    std::string l_name;
    std::string nick_name;
    std::string number;
    std::string secret;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Name: ";
    std::getline(std::cin, nome);
    std::cout << "Last Name: ";
    std::getline(std::cin, l_name);
    std::cout << "Nick Name: ";
    std::getline(std::cin, nick_name);
    while(1)
    {
        size_t i = 0;
        bool valid;
        std::cout << "Number: ";
        std::getline(std::cin, number);
        //std::cin.ignore();
        valid = !number.empty();
        while(i < number.size())
        {
            if(!isdigit(number[i]))
            {
                valid = false;
                break;
            }
            i++;
        }
        if(valid)
            break;
        else
            std::cout <<"Invalid Input " <<std::endl;

    }
    std::cout << "Darkest Secret ";
    std::getline(std::cin, secret);
    this->contacto[this->index].set_contact(nome, l_name, nick_name, number, secret);
    this->index = (index + 1) % 8;
    if(this->i < 8)
        this->i++;
}

static std::string format(const std::string &name)
{
    if (name.length() > 9)
        return name.substr(0, 9) + ".";
    return name;
}

void Phonebook::search_contact()
{
    int i = 0;
    if (this->i == 0)
    {
        std::cout << "Nenhum contacto encontrado" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "INDEX"
              << "|" << std::setw(10) << "FIRST NAME"
              << "|" << std::setw(10) << "LAST NAME"
              << "|" << std::setw(10) << "NICK NAME"
              << "|" << std::endl;
    while (i < this->i)
    {
        std::cout << std::setw(10) << i
                  << "|" << std::setw(10) << format(contacto[i].get_first_name())
                  << "|" << std::setw(10) << format(contacto[i].get_last_name())
                  << "|" << std::setw(10) << format(contacto[i].get_nick_name())
                  << "|" << std::endl;
        i++;
    }
}
void Phonebook::search_index(int index)
{
    if(index >= 0 && index < this->i)
        this->contacto[index].get_contact();
    else
        std::cout <<"Invalid Index"<<std::endl;
}
