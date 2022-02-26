#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
char    *ft_strdup(const char *s1);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t  ft_strlen(char *str);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void  	*ft_memcpy(void *dst, const void *src, size_t n);
void  	*ft_memmove(void *dst, const void *src, size_t len);
int     ft_atoi(const char *str);
int     ft_isascii(char c);
int     ft_isprint(char c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);
int	    ft_isalnum(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
