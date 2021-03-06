/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkabbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:42:12 by bkabbas           #+#    #+#             */
/*   Updated: 2016/01/18 17:30:00 by bkabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*
**	START STANDARD LIB
*/
void				*ft_memset(void *dst, int c, size_t s_bytes);
void				*ft_memcpy(void *dst, const void *src, size_t s_bytes);
void				*ft_memccpy(void *dst,
								const void *src,
								int c,
								size_t s_bytes);
void				*ft_memmove(void *dst, const void *src, size_t s_bytes);
void				*ft_memchr(const void *src, int c, size_t s_bytes);
int					ft_memcmp(const void *s1, const void *s2, size_t s_bytes);
void				ft_bzero(void *dst, size_t s_bytes);
int					ft_atoi(const char *str);
size_t				ft_strlen(char const *str);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t length);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str,
								const char *to_find,
								size_t length);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
/*
**	END STANDARD LIB
**	START CUSTOM LIB
*/
char				*ft_strnew(size_t size);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c, int *size);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
/*
**	END CUSTOM LIB
**	START LIST LIB
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lst_get_end(t_list *list);
void				ft_lstdel_nothing(void *p, size_t s);
void				ft_lstdel_content(void *p, size_t s);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
/*
**  END LIST LIB
**	START SELF LIB
*/
typedef struct		s_array
{
	void			*array;
	size_t			element_size;
	size_t			bytes_size;
	size_t			count;
}					t_array;
t_array				*ft_create_array(size_t element_size);
void				ft_pushback_array(t_array *array,
										void *value,
										size_t value_size);
void				ft_pushfront_array(t_array *array,
										void *value,
										size_t value_size);
void				ft_del_at_array(t_array *array, int index);
void				ft_delrange_at_array(t_array *array, int start, int end);
void				ft_delete_array(t_array *array);
size_t				ft_lstcount(t_list *lst);
t_list				*ft_lstfindbyindex(t_list *list, int index);
t_list				*ft_lstfindbyvalue(t_list *list, t_list *to_find);
t_array				*ft_lst_to_t_array(t_list *lst, size_t size);
void				**ft_lst_to_array(t_list *lst, size_t size);
void				ft_memswap(void *swpf, void *swps);
void				*ft_memjoin(void *c1,
								void *c2,
								size_t size_c1,
								size_t size_c2);
char				*ft_strtrimarraychar(char const *s, t_array *rm);
char				*ft_strtrimchar(char const *s, int rm);
char				*ft_strtrimlchar(char const *s, int rm);
char				*ft_strtrimrchar(char const *s, int rm);
char				*ft_strrev(char *s);
char				*ft_strchrnul(const char *s, int c);
char				*ft_strtoupper(char *s);
char				*ft_strtolower(char *s);
int					ft_strchr_count(const char *s, int c);
char				*ft_strnchr(const char *s, int c, int n);
int					ft_getnextxchar(const char *s, int c, int start, int move);
int					ft_getnextxarraychar(const char *s,
											t_array *ex,
											int start,
											int move);
int					ft_isspace(int c);
int					ft_islower(int c);
int					ft_isupper(int c);
/*
**	MATH METHODS
*/
int					ft_abs(int nb);
int					ft_max(int n1, int n2);
int					ft_min(int n1, int n2);
int					ft_clamp(int nb, int min, int max);
int					ft_sqrt(int nb);
float				ft_clampf(float nb, float min, float max);
float				ft_clampf01(float nb);
float				ft_pi();
void				**ft_create_tab(int width, int height, size_t element_size);
/*
**	END SELF LIB
*/
#endif
