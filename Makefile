.PHONY: clean all fclean re
NAME = libft.a
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
	 ft_memcmp.c \
	 ft_strnstr.c \
	 ft_atoi.c \
	 ft_calloc.c \
	 ft_strdup.c \
	 ft_substr.c \
	 ft_strjoin.c \
	 ft_strtrim.c \
	 ft_strmapi.c \
	 ft_striteri.c \
	 ft_putchar_fd.c \
	 ft_putstr_fd.c \
	 ft_putendl_fd.c
all : $(NAME)

$(NAME): $(OBJS) 
	@ar rcs $(NAME) $(OBJS)&&ls

%.o : %.c Makefile 
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -r $(OBJS)&&ls

fclean : clean
	@rm -rf $(OBJS) $(NAME)&&ls

re:
	@$(MAKE) fclean
	@$(MAKE) all
