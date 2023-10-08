.PHONY: clean all fclean re
NAME = libft.a
HEADER = libft.h
OBJS = $(SOURCES:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I.
CC = cc
SOURCES = ft_isalpha.c \
	 ft_isdigit.c \
	 ft_isalnum.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_strlen.c \
	 ft_memset.c \
	 ft_bzero.c \
	 ft_memcpy.c \
	 ft_memmove.c \
	 ft_strlcpy.c \
	 ft_strlcat.c \
	 ft_toupper.c \
	 ft_tolower.c \
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_strncmp.c \
	 ft_memchr.c \
	 ft_memcmp.c

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@ar rcs $(NAME) $(OBJS)&&ls

%.o : %.c Makefile $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -r $(OBJS)&&ls

fclean : clean
	@rm -rf $(OBJS) $(NAME)&&ls

re:
	@$(MAKE) fclean
	@$(MAKE) all
