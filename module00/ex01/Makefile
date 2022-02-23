NAME		=	phonebook

SRCS		=	${shell find . -name "*.cpp"}
OBJS		=	$(patsubst %.cpp,%.o,$(SRCS))

CXX			=	c++
CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror
RM 			=	rm -rf


all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
			@$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
