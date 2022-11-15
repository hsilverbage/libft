#ifndef		LIBFT_H
#define		LIBFT_H

int         ft_atoi(char *str);
int         ft_isalnum(int c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int         ft_isprint(int c);
void	    *ft_memset(void *b, int c, size_t len);
char    	*ft_strchr(char *str, int c);
int	        ft_strlcat(char *dest, char *src, size_t destsize);
long int	ft_strlcpy(char *dest, char *src, size_t  destsize);
int	        ft_strlen(const char *s);
int	        ft_strncmp(char *s1, char *s2, size_t n);
char        *ft_strnstr(char *haystack, char *needle, size_t len);
char	    *ft_strrchr(char *str, int c);
int	        ft_tolower(int c);
int	        ft_toupper(int c);

#endif
