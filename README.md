# Libft
A Library with re-writed standard C functions.

## Summary

- [Getting started](https://github.com/thiago-neves/libft#getting-started)
- [Makefile commands](https://github.com/thiago-neves/libft#makefile-commands)
- [Functions](https://github.com/thiago-neves/libft#functions)
  - [ft_isalpha](https://github.com/thiago-neves/libft#ft_isalpha)
  - [ft_isdigit](https://github.com/thiago-neves/libft#ft_isdigit)
  - [ft_isalnum](https://github.com/thiago-neves/libft#ft_isalnum)
  - [ft_isascii](https://github.com/thiago-neves/libft#ft_isascii)
  - [ft_isprint](https://github.com/thiago-neves/libft#ft_isprint)
  - [ft_strlen](https://github.com/thiago-neves/libft#ft_strlen)
  - [ft_memset](https://github.com/thiago-neves/libft#ft_memset)
  - [ft_bzero](https://github.com/thiago-neves/libft#ft_bzero)
  - [ft_memcpy](https://github.com/thiago-neves/libft#ft_memcpy)
  - [ft_memmove](https://github.com/thiago-neves/libft#ft_memmove)
  - [ft_strlcpy](https://github.com/thiago-neves/libft#ft_strlcpy)
  - [ft_strlcat](https://github.com/thiago-neves/libft#ft_strlcat)
  - [ft_toupper](https://github.com/thiago-neves/libft#ft_toupper)
  - [ft_tolower](https://github.com/thiago-neves/libft#ft_tolower)
  - [ft_strchr](https://github.com/thiago-neves/libft#ft_strchr)
  - [ft_strncmp](https://github.com/thiago-neves/libft#ft_strncmp)
  - [ft_memchr](https://github.com/thiago-neves/libft#ft_memchr)
  - [ft_memcmp](https://github.com/thiago-neves/libft#ft_memcmp)
  - [ft_strnstr](https://github.com/thiago-neves/libft#ft_strnstr)
  - [ft_atoi](https://github.com/thiago-neves/libft#ft_atoi)
  - [ft_calloc](https://github.com/thiago-neves/libft#ft_calloc)
  - [ft_strdup](https://github.com/thiago-neves/libft#ft_strdup)
  - [ft_substr](https://github.com/thiago-neves/libft#ft_substr)
  - [ft_strjoin](https://github.com/thiago-neves/libft#ft_strjoin)
  - [ft_strtrim](https://github.com/thiago-neves/libft#ft_strtrim)
  - [ft_split](https://github.com/thiago-neves/libft#ft_split)
  - [ft_itoa](https://github.com/thiago-neves/libft#ft_itoa)
  - [ft_strmapi](https://github.com/thiago-neves/libft#ft_strmapi)
  - [ft_striteri](https://github.com/thiago-neves/libft#ft_striteri)
  - [ft_putchar_fd](https://github.com/thiago-neves/libft#ft_putchar_fd)
  - [ft_putstr_fd](https://github.com/thiago-neves/libft#ft_putstr_fd)
  - [ft_putendl_fd](https://github.com/thiago-neves/libft#ft_putendl_fd)
  - [ft_putnbr_fd](https://github.com/thiago-neves/libft#ft_putnbr_fd)

## Getting started

To be able to use the library functions you'll have to compile the library using the `make` command, it'll generate a file library called libft.a.

## Makefile commands

`make` compile and generates the libft.a.

`make clean` clean all the .o files from the folder.

`make fclean` executes the `make clean` command and remove libft.a from the folder.

`make re` executes the `make clean` and `make` commands to recompile the library.

`make n` executes the norminette.

## Functions

### ft_isalpha

`int ft_isalpha(int char)` checks if the passed character is alphabetic.

### ft_isdigit

`int ft_isdigit(int char)` checks if the passed character is a decimal digit character.

### ft_isalnum

`int ft_isalnum(int char)` checks whether the argument passed is an alphanumeric character.

### ft_isascii

`int ft_isascii(int char)` checks if the passed character is ascii.

### ft_isprint

`int ft_isprint(int char)` check if the the argument passed is printable.

### ft_strlen

`size_t ft_strlen(const char *str)` returns the length of the passed string.

### ft_memset

`void *ft_memset(void *str, int c, size_t n)` copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.

### ft_bzero

`void ft_bzero(void *s, size_t n)` erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.

### ft_memcpy

`void *ft_memcpy(void *dest, const void * src, size_t n)` copies n characters from memory area src to memory area dest.

### ft_memmove

`void *ft_memmove(void *str1, const void *str2, size_t n)` copies n characters from str2 to str1, but for overlapping memory blocks, ft_memmove() is a safer approach than ft_memcpy().

### ft_strlcpy

`size_t ft_strlcpy(char *dst, const char *src, size_t size)` copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

### ft_strlcat

`size_t ft_strlcat(char *dst, const char *src, size_t size)` appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

### ft_toupper

`int ft_toupper(int char)` converts a lowercase character to an uppercase character.

### ft_tolower

`int ft_tolower(int char)` converts a uppercase character to an lowercase character.

### ft_strchr

`char *ft_strchr(const char *str, int c)` searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.

### ft_strncmp

`int ft_strncmp(const char *str1, const char *str2, size_t n)` compares at most the first n bytes of str1 and str2.

### ft_memchr

`void *ft_memchr(const void *str, int c, size_t n)` searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.

### ft_memcmp
`int ft_memcmp ( const void * ptr1, const void * ptr2, size_t num)` compares the first num bytes of the block of memory pointed by ptr1 to the first num bytes pointed by ptr2, returning zero if they all match or a value different from zero representing which is greater if they do not.

### ft_strnstr
`char *ft_strnstr (const char * s1, const char * s2, size_t len)` finds the first substring in a length-limited string.

### ft_atoi
`int ft_atoi(const char *str)` converts the string argument str to an integer (type int).

### ft_calloc
`void* ft_calloc (size_t num, size_t size)` allocates a block of memory for an array of num elements, each of them size bytes long, and initializes all its bits to zero.

### ft_strdup

`char *ft_strdup(const char *s)` returns a pointer to the duplicated string. It returns NULL if insufficient memory was available, with errno set to indicate the error.

### ft_substr

`char *ft_substr(char const *s, unsigned int start, size_t len)` Allocates (with malloc(3)) and returns a substring
from the string ’s’. The substring begins at index ’start’ and is of
maximum size ’len’.

### ft_strjoin

`char *ft_strjoin(char const *s1, char const *s2)` Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

### ft_strtrim

`char *ft_strtrim(char const *s1, char const *set)` allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

### ft_split

`char **ft_split(char const *s, char c)` allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.

### ft_itoa

`char *ft_itoa(int n)` allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

### ft_strmapi

`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.

### ft_striteri

`void ft_striteri(char *s, void (*f)(unsigned int, char*))` applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.

### ft_putchar_fd

`void ft_putchar_fd(char c, int fd)` outputs the character ’c’ to the given file descriptor.

### ft_putstr_fd

`void ft_putstr_fd(char *s, int fd)` outputs the string ’s’ to the given file descriptor.

### ft_putendl_fd

`void ft_putendl_fd(char *s, int fd)` outputs the string ’s’ to the given file descriptor, followed by a newline.

### ft_putnbr_fd

`void ft_putnbr_fd(int n, int fd)` outputs the integer ’n’ to the given file descriptor.
