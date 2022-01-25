NAME		=	libft.a

OBJ_DIR = objs
SRC_DIR = srcs

_OBJS		=	ft_atoi.o		ft_strlcat.o	ft_isalpha.o		\
				ft_itoa.o		ft_strnstr.o	ft_memmove.o		\
				ft_split.o		ft_memccpy.o	ft_isalnum.o		\
				ft_bzero.o		ft_strndup.o	ft_isprint.o		\
				ft_memchr.o		ft_isascii.o	ft_strncmp.o		\
				ft_calloc.o		ft_strrchr.o	ft_strmapi.o		\
			  	ft_memset.o		ft_strlcpy.o	ft_toupper.o		\
				ft_memcmp.o		ft_tolower.o	ft_putnbr_fd.o		\
				ft_substr.o		ft_isdigit.o	ft_putstr_fd.o		\
				ft_strchr.o		ft_strjoin.o	ft_putchar_fd.o		\
				ft_strlen.o		ft_strtrim.o	ft_putendl_fd.o		\
				ft_memcpy.o		ft_strncpy.o	ft_strdup.o			\

OBJS		=	$(patsubst %,$(OBJ_DIR)/%,$(_OBJS))


CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror
INCLUDE		= 	-I include

all			:	$(NAME)

$(NAME) 	:	$(OBJS)
	ar -rvs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o	:	$(SRC_DIR)/%.c
					$(CC) -c $(INCLUDE) -o $@ $< $(CFLAGS)

clean		:
	 rm -f $(OBJ_DIR)/*.o

fclean		:	clean
	$(RM) $(NAME)

#re			:	fclean all