#ifndef	LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *buf, int ch, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strcat(char *dst, const char *add);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strdup(const char *src);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
int		main();

#endif
