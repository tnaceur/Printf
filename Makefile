NAME = libftprintf.a
INC = ft_printf.h
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c\
	   ft_putnbr.c\
	   ft_printf.c\
	   ft_nbrsize.c\
	   ft_putstr.c\
	   ft_print_hexa.c\
	   ft_printhexa.c\
	   ft_putadress.c\
	   ft_nbrsize2.c\
	   ft_putnbr2.c\

OBJS = $(SRCS:.c=.o)
RM = rm -rf
AR = ar -rcs

all : $(NAME)

$(NAME) : $(INC) $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean all
