FILES	=	main	\
			Fixed	\

SRCS			=	$(addsuffix .cpp, $(FILES))

OBJS			=	$(SRCS:.cpp=.o)
DEPTH			=	$(SRCS:.cpp=.d)

CXX				=	c++
RM				=	rm -f
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -MMD

NAME			=	Fixed

all:			$(NAME)

$(NAME):		Makefile $(OBJS)
				@clear
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
-include $(DEPTH)

clean:
				$(RM) $(OBJS) $(DEPTH)

fclean:			clean
				$(RM) $(NAME) 

re:				fclean $(NAME)

PHONY:			all clean fclean re test