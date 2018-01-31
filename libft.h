/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:18:38 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 16:18:39 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define WRONG_PARAMS "Les paramètres sont invalides"
# define ERROR_ALLOC "L'allocation de mémoire a rencontré un problème"

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** Gestion d'erreur
*/

void				ft_error(char error[]);

/*
** Mesure de longueur
*/

size_t				ft_strlen(const char *str);
size_t				ft_strclen(const char *str, int c);
size_t				ft_ilen(int nb);
size_t				ft_nbword(const char *str, int c);

/*
** Comparaison de caractère
*/

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_issign(int c);
int					ft_iseblank(int c);

int					ft_isbetween(int c, int min, int max);
int					ft_isnnsame(int c1, int c2);

int					ft_stris(const char *s, int (*f)(int));
char				*ft_skipis(const char *s, int (*f)(int));
char				*ft_skipris(const char *s, int (*f)(int));
char				*ft_skipchar(const char *str, int c);
char				*ft_skipbchar(const char *str, int c);

/*
** Informations sur les chaines
*/

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);

char				*ft_strchr(const char *s, int c);
char				*ft_strnchr(const char *s, int c, size_t n);
char				*ft_strcchr(const char *s, int c, int d);
char				*ft_strrchr(const char *s, int c);

char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);

/*
** Gestion de chaines
*/

void				ft_strclr(char *s);
void				ft_strnclr(char *s, size_t n);

char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t n);

char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t n);

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
** Allocation de chaines
*/

char				*ft_strnew(size_t size);

void				ft_strdel(char **as);

char				**ft_strsplit(const char *str, char c);

char				*ft_strsub(char const *s, unsigned int start, size_t len);

char				*ft_strtrim(const char *s);

char				*ft_strdup(const char *src);
char				*ft_strndup(const char *src, size_t n);
char				*ft_strldup(const char *src, size_t n);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** Affichage dans le terminal
*/

void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_puttab(const char **t);
void				ft_putunicode(int c);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_puttab_fd(const char **t, int fd);
void				ft_putunicode_fd(int c, int fd);

/*
** Conversions
*/

int					ft_absolute(int n);
int					ft_power(int n, int p);

int					ft_smaller(int c1, int c2);
int					ft_bigger(int c1, int c2);

int					ft_atoi(const char *s);
long				ft_atol(const char *s);
long long			ft_atoll(const char *s);
int					ft_atoxi(const char *s);
long				ft_atoxl(const char *s);
long long			ft_atoxll(const char *s);

unsigned			ft_atoui(const char *s);
unsigned long		ft_atoul(const char *s);
unsigned long long	ft_atoull(const char *s);
unsigned			ft_atoxui(const char *s);
unsigned long		ft_atoxul(const char *s);
unsigned long long	ft_atoxull(const char *s);

char				*ft_itoa(int nb);

int					ft_tolower(int c);
int					ft_toupper(int c);

char				*ft_strtolower(const char *s);
char				*ft_strtoupper(const char *s);

/*
** Mémoire
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *des, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, void *src, size_t len);
void				*ft_memset(void *s, int c, size_t n);

/*
** Gestion de liste
*/

void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstdup(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(const void *content, size_t content_size);

#endif
