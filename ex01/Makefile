NAME = ex01
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp phonebook.cpp contact.cpp
HEADERS = contact.hpp phonebook.hpp inc.hpp
OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX)	$(CXXFLAGS)	-o	$(NAME)	$(OBJS)

%.o:%.cpp $(HEADERS)
	$(CXX)	$(CXXFLAGS)	-c	$<	-o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all