SRCS	= push_swap.c \
		  utils_push_swap.c \
		  validation.c \
		  utils_validation.c \
		  utils_misc.c \
		  struct_ops.c \
		  instructions_pt1.c \
		  instructions_pt2.c \
		  ordinations.c \
		  utils_ordination_until_3.c \
		  utils_ordination_4-5.c \
		  utils_ordination_radix.c \
		  utils_ordination_radix_ext.c \

NAME	= push_swap

CC		= cc -Wall -Wextra -Werror

LIBPATH = ./libft

LIBLIB	= ./libft.a

RM		= rm -rf

DEBUG	= debugging

$(NAME): $(SRCS)
		@cd $(LIBPATH) && make && cp libft.a ../
		@$(CC) $(SRCS) $(LIBLIB) -o $(NAME)

$(DEBUG): $(SRCS)
		@cd $(LIBPATH) && make && cp libft.a ../
		@$(CC) -g $(SRCS) $(LIBLIB) -o $(NAME)

all: $(NAME)

clean:
		@$(RM) $(LIBLIB) push_swap.dSYM

fclean:
		@$(RM) $(NAME) $(LIBLIB) push_swap.dSYM
		@cd $(LIBPATH) && make fclean

re: fclean all

debug: $(DEBUG)

.PHONY:	all clean fclean re debug
