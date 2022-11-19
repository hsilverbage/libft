#ifndef		LIBFT_H
#define		LIBFT_H

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void * restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(void *str, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);

char	*ft_strchr(char *str, int c);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
char	*ft_strrchr(char *str, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start,size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

size_t	ft_strlcat(char *dest, char *src, size_t destsize);
size_t	ft_strlcpy(char *dest, char *src, size_t destsize);



#endif
