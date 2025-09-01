#include "inc.hpp"

int main()
{

    Phonebook phone;
    int index;
    while(1)
    {
        system("clear");
        std::cout <<"============================="<<std::endl;
        std::cout <<"============================="<<std::endl;
        std::cout <<"============================="<<std::endl;
        std::cout <<"=====AGENDA  TELEFONICA ====="<<std::endl;
        std::cout <<"============================="<<std::endl;
        std::cout <<"============================="<<std::endl;
        std::cout <<"============================="<<std::endl;
        std::cout <<"============================="<<std::endl;
        std::cout <<"ESCOLHA UMA OPCAO==========="<<std::endl;
        std::cout <<"=ADD"<<std::endl;
        std::cout <<"=SEARCH"<<std::endl;
        std::cout <<"=EXIT"<<std::endl;
        std::cout <<" "<<std::endl;
        std::string input;
        std::cin >> input;
        if(input == "ADD")
                phone.add_contact();
        else if(input == "SEARCH")
        {
            phone.search_contact();
            std::cout <<"Enter a valid index: ";
            std::cin >>index;
            if(std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                std::cout <<"invalid indice"<<std::endl;
                std::cin.get();
                continue;
            }
            if(!(index >= 0 && index <= 7))
            {
                std::cout <<"index out of range"<<std::endl;
                std::cin.get();
                continue;
            }
            phone.search_index(index);
            std::cin.ignore();
            std::cin.get();
        }
        else if(input == "EXIT")
            break;
        else
        {
            std::cout <<"Input incorreto"<<std::endl;
            std::cin.ignore();
            std::cin.get();
        }

    }

    return (0);
}

