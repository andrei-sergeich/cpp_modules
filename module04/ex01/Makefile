NAME		=	animal_with_brain

SRCS		=	${shell find . -name "*.cpp"}
OBJS		=	$(patsubst %.cpp,%.o,$(SRCS))

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM 			=	rm -f

RESET		=	\033[0m
GREEN		=	\033[38;5;46
WHITE		=	\033[38;5;15m
GREY		=	\033[38;5;8m
ORANGE		=	\033[38;5;202m
RED			=	\033[38;5;160m


all:		$(NAME)

$(NAME):	$(OBJS)
			@echo "$(GREEN)-------------------------------------------------------"
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
			@echo "Executable				./$(NAME) $(RESET)"

%.o:		%.cpp
			@echo "$(ORANGE)Compiling...				$(WHITE)$<"
			@$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
			@echo "$(RED)-------------------------------------------------------"
			@$(RM) $(OBJS)
			@echo "$(WHITE)REMOVED O-FILES $(RESET)"

fclean:		clean
			@echo "$(RED)-------------------------------------------------------"
			@$(RM) $(NAME)
			@echo "$(WHITE)REMOVED EXECUTABLE FILE $(RESET)"

re:			fclean all

.PHONY:		all clean fclean re
