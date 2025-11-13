/* ************************************************************************** */
/*                                                                            */
/*                                                            ::::::::        */
/*   libft.h                                                 :+:    :+:       */
/*                                                          +:+               */
/*   By: bede-kon <bede-kon@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2025/10/07 16:29:15 by bede-kon            #+#    #+#           */
/*   Updated: 2025/10/07 18:10:01 by bede-kon            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// Is something ..
//
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
//

// Convertion ..
//
int		ft_toupper(int c);
int		ft_tolower(int c);
/* Converts string to int */
int		ft_atoi(const char *nptr);
/* Converts int to string */
char	*ft_itoa(int n);
//

// Changing and copying memory ..
//
/* Sets n amount of bytes to constant byte c */
void	*ft_memset(void *s, int c, size_t n);
/* Sets n bytes to 0 */
void	ft_bzero(void *s, size_t n);
/* Allocates memory and sets to 0 */
void	*ft_calloc(size_t nmemb, size_t size);
/* Copies n bytes from src to dst (non overlapping area) */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* Copies n bytes from src to dst (area may overlap) */
void	*ft_memmove(void *dest, const void *src, size_t n);
/* Copies up to size -1 chars from null terminated string src to dst */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/* Appends up to (size - dst_len) -1 chars from src to end of dst */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
//

// Strings ..
//
/* Returns string length minus the '\0' */
size_t	ft_strlen(const char *s);
/* Creates duplicate string */
char	*ft_strdup(const char *s);
/* Creates substring */
char	*ft_substr(const char *s, unsigned int start, size_t len);
/* Creates joined string */
char	*ft_strjoin(const char *s1, const char *s2);
/* Trims chars in set from beginning and end of string */
char	*ft_strtrim(const char *s1, const char *set);
/* Creates strings split on delimeter */
char	**ft_split(const char *s, char c);
/* Applies a function to every char in string */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/* Result from a function applied to every char in string */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
//

// Searching and comparing ..
//
/* Returns first occurence of char in string */
char	*ft_strchr(const char *s, int c);
/* Returns last occurence of char in string */
char	*ft_strrchr(const char *s, int c);
/* Returns first occurence of c in memory area up till n bytes*/
void	*ft_memchr(const void *s, int c, size_t n);
/* Compares first different char up till n bytes */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* Compares first different byte up till n bytes */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* Locates first occurence of little string in big string up till n bytes */
char	*ft_strnstr(const char *big, const char *little, size_t len);
//

// File descriptors ..
//
/* Writes char in fd */
void	ft_putchar_fd(char c, int fd);
/* Writes string in fd */
void	ft_putstr_fd(char *s, int fd);
/* Writes string + '\n' in fd */
void	ft_putendl_fd(char *s, int fd);
/* Writes int in fd */
void	ft_putnbr_fd(int n, int fd);
//

// Linked lists ..
//
/* Returns node with content that points to NULL */
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
void	ft_lstadd_back(t_list **lst, t_list *new_node);
int		ft_lstsize(t_list *lst);
/* Returns last node of list */
t_list	*ft_lstlast(t_list *lst);
/* Deletes content and frees a node */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/* Deletes content and frees list, sets list pointer to NULL */
void	ft_lstclear(t_list **list, void (*del)(void *));
/* Applies a funcion to each node's content */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/* Applies a function to each node's content, results are added to a new list,
 * deletes nodes on error */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
