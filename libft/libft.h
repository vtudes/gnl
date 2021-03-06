/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiceli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:55:34 by pmiceli           #+#    #+#             */
/*   Updated: 2017/11/28 21:02:02 by pmiceli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# define TEST ft_putendl_color("TEST", "cyan");
# define NL ft_putchar('\n');

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putendl_background(char *str, char *color);
void				ft_putendl_color(char *str, char *color);
void				ft_putstr_background(char *str, char *color);
void				ft_putstr_color(char *str, char *color);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_swap_nbr(int *a, int *b);
void				ft_swap_char(char *a, char *b);
void				ft_putnbr(int nb);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int k, size_t n);
void				*ft_memccpy(void *dest, void const *src, int c, size_t n);
void				*ft_memmove(void *dest, void const *src, size_t n);
void				*ft_memcpy(void *dest, void const *src, size_t n);
void				*ft_memchr(void const *s, int c, size_t n);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int nb, int fd);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ptr);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void(*f)(unsigned int, char*));
void				ft_printtab_char(char **tab);
void				ft_printtab_int(int **tab);
void				ft_lstadd(t_list **alst, t_list *nw);
void				ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_putnbr_endl(int nb);
void				ft_printlst_char(t_list *chain);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_putendl_background(char *str, char *color);
void				ft_putstr_color(char *str, char *color);
void				ft_putstr_background(char *str, char *color);
void				ft_putendl_color(char *str, char *color);
void				ft_free_tab(char **tab);
size_t				ft_strlcat(char *dest, char const *src, size_t nb);
size_t				ft_strlen(char const *str);
size_t				ft_intlen(int nb);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_atoi(char const *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strdup(char const *src);
char				*ft_strcat(char *dest, char const *src);
char				*ft_strstr(char const *src, char const *to_find);
char				*ft_strcpy(char *dest, char const *src);
char				*ft_strncpy(char *dest, char const *src, size_t n);
char				*ft_strnstr(char const *src, char const *find, size_t len);
char				*ft_strchr(char const *s, int c);
char				*ft_strrchr(char const*s, int c);
char				*ft_strchr_rev(char const *s, int c);
char				*ft_strncat(char *dest, char const *src, size_t nb);
char				*ft_itoa(int nb);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_free(char *s1, char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
#endif
