#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;
    i = 0;
    j = 1;

    if(ac != 1)
    {
        while(j < ac)
        {
            i = 0;
            while(av[j][i] != '\0')
            {
                if(av[j][i] >= 'a' && av[j][i] <= 'z')
                {
                     av[j][i] -= 32;
                     std::cout << av[j][i];
                }
                else
                    std::cout << av[j][i]; 
                i++;         
            }
            j++;
        }
        std::cout <<" "<<std::endl;
    }
    else
          std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}