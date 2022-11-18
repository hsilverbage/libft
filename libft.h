#ifndef		LIBFT_H
#define		LIBFT_H

#include <stdlib.h>

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

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void * restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(void *str, int c, size_t n);

char	*ft_strchr(char *str, int c);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
char	*ft_strrchr(char *str, int c);

size_t	ft_strlcat(char *dest, char *src, size_t destsize);
size_t	ft_strlcpy(char *dest, char *src, size_t destsize);



#endif
