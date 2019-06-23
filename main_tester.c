#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memccpy.c"
#include "ft_memmove.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strcpy.c"
#include "ft_strncpy.c"
#include "ft_strcat.c"
#include "ft_strncat.c"
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strstr.c"
#include "ft_strnstr.c"
#include "ft_strcmp.c"
#include "ft_strncmp.c"
#include "ft_atoi.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"



/**
* CONTENT
* I. PART I.
*	1. FT_MEMSET
*	2. FT_BZERO
*	3. FT_MEMCPY
*	4. FT_MEMCCPY
*	5. FT_MEMMOVE
*	6. FT_MEMCHR
*	7. FT_MEMCMP
*	8. FT_STRLEN
*	9. FT_STRDUP
*	10. FT_STRCPY
*	11. FT_STRNCPY
*	12. FT_STRCAT
*	13. FT_STRNCAT
*	14. FT_STRLCAT
*	15. FT_STRCHR
*	16. FT_STRRCHR
*	17. FT_STRSTR
*	18. FT_STRNSTR
*	19. FT_STRCMP
*	20. FT_STRNCMP
*	21. FT_ATOI
*	22. FT_ISALPHA
*	23. FT_ISDIGIT
*	24. FT_ISALNUM
*	25. FT_ISASCII
*	26. FT_ISPRINT
*	27. FT_TOUPPER
*	28. FT_TOLOWER
* II. PART II.
*	1. FT_MEMALLOC
*	2. FT_MEMDEL
*	3. FT_STRNEW
*	4. FT_STRDEL
*	5. FT_STRCLR
*	6. FT_STRITER
*	7. FT_STRITERI
*	8. FT_STRMAP
*	9. FT_STRMAPI
*	10. FT_STREQU
*	11. FT_STRSUB
*	12. FT_STRJOIN
*	13. FT_STRTRIM
*	14. FT_STRSPLIT
*	15. FT_ITOA
*	16. FT_PUTCHAR
*	17. FT_PUTSTR
*	18. FT_PUTENDL
*	19. FT_PUTNBR
*	20. FT_PUTCHAR_FD
*	21. FT_PUTSTR_FD
*	22. FT_PUTENDL_FD
*	23. FT_PUTNBR_FD
* III. BONUS PART
*	1. FT_LSTNEW
*	2. FT_LSTDELONE
*	3. FT_LSTDEL
*	4. FT_LSTADD
*	5. FT_LSTITER
*	6. FT_LSTMAP
*/

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct	s_list *next;
}				t_list;

/**
* Prototypes for PART I.
*/

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/**
* Prototypes for PART II.
*/

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/**
* Prototypes for BONUS PART
*/

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/**
* Secondary functions
*/

// Global variables for testing the bonus part
static int sign = 0;
static int sign2 = 0;

void	striter_test(char *s)
{
	*s = 'z';
}

void	striteri_test(unsigned int i, char *s)
{
	*s = (char)(i + '0');
}

char	strmap_test(char c)
{
	return (c);
}

char	strmapi_test(unsigned int i, char c)
{
	write(1, &c, 0);
	return ((char)(i + '0'));
}

void	lstdelone_test(void *content, size_t content_size)
{
	char			*cp_content;
	unsigned int	i;

	i = 0;
	cp_content = (char *)content;
	while (i < content_size)
	{
		cp_content[i] = '\0';
		i++;
	}
	sign = sign + 1;
}

void	lstiter_test(t_list	*elem)
{
	if (elem)
	{
		sign2 = sign2 + 1;
	}
}

t_list	*lstmap_test(t_list *elem)
{
	t_list	*new;

	new = malloc(elem->content_size);
	if (new)
	{
		new->content = elem->content;
		new->content_size = elem->content_size;
		new->next = NULL;
	}
	return (new);
}

int		main(void)
{
	/**
	* I. PART I.
	* 1. FT_MEMSET
	*/

	char	str[8] = "abcdefg";
	char	str2[8] = "abcdefg";
	char	str3[8] = "zyxwvut";
	char	str4[8] = "zyxwvut";
	char	str5[8] = "1234567";
	char	str6[8] = "1234567";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMSET\x1b[0m");
	printf("Initial: %s\n", str);
	memset(str, 97, 7);
	printf("Memset return: %s\n", str);
	ft_memset(str2, 97, 7);
	printf("ft_memset return: %s\n", str2);
	if (strcmp(str, str2) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str3);
	memset(str3, 126, 3);
	printf("Memset return: %s\n", str3);
	ft_memset(str4, 126, 3);
	printf("ft_memset return: %s\n", str4);
	if (strcmp(str3, str4) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str5);
	memset(str5, 16, 3);
	printf("Memset return: %s\n", str5);
	ft_memset(str6, 16, 3);
	printf("ft_memset return: %s\n", str6);
	if (strcmp(str5, str6) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 2. FT_BZERO
	*/

	char	str7[8] = "abcdefg";
	char	str8[8] = "abcdefg";
	char	str9[8] = "zyxwvut";
	char	str10[8] = "zyxwvut";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_BZERO\x1b[0m");
	printf("Initial: %s\n", str7);
	bzero(str7, 1);
	printf("Bzero return: %s\n", str7);
	ft_bzero(str8, 1);
	printf("ft_bzero return: %s\n", str8);
	if (strcmp(str7, str8) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str9);
	bzero(str9, 7);
	printf("Bzero return: %s\n", str9);
	ft_bzero(str10, 7);
	printf("ft_bzero return: %s\n", str10);
	if (str9[0] == str10[0] && str9[1] == str10[1] && str9[2] == str10[2]
		&& str9[3] == str10[3] && str9[4] == str10[4] && str9[5] == str10[5]
		&& str9[6] == str10[6] && str9[7] == str10[7])
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 3. FT_MEMCPY
	*/

	char	str11[15] = "1234567890";
	char	str12[15] = "0987654321";
	char	str13[15] = "1234567890";
	char	str14[15] = "0987654321";
	char	str15[15] = "1234567890";
	char	str16[15] = "";
	char	str17[15] = "1234567890";
	char	str18[15] = "";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCPY\x1b[0m");
	printf("Initial: %s\n", str12);
	memcpy(str12, str11, 8);
	printf("Memcpy return: %s\n", str12);
	ft_memcpy(str14, str13, 8);
	printf("ft_memcpy return: %s\n", str14);
	if (strcmp(str12, str14) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str16);
	memcpy(str16, str15, 8);
	printf("Memcpy return: %s\n", str16);
	ft_memcpy(str18, str17, 8);
	printf("ft_memcpy return: %s\n", str18);
	if (strcmp(str16, str18) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 4. FT_MEMCCPY
	*/

	char	str21[20] = "hello, world!";
	char	str22[20] = "hellohellohellohello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCCPY\x1b[0m");
	printf("Initial: %s\n", str21);
	ft_memccpy(str22, str21, 'o', 9);
	printf("ft_memccpy return: %s\n", str22);
	if (strcmp(str22, "hellohellohellohello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 5. FT_MEMMOVE
	*/

	char	str23[11] = "1234567890";
	char	str24[11] = "1234567890";
	char	str25[11] = "1234567890";
	char	str26[11] = "1234567890";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMMOVE\x1b[0m");
	printf("Initial: %s\n", str23);
	memmove(&str23[3], &str23[2], 3);
	printf("Memmove return: %s\n", str23);
	ft_memmove(&str24[3], &str24[2], 3);
	printf("ft_memmove return: %s\n", str24);
	if (strcmp(str23, str24) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str25);
	memmove(&str25[2], &str25[3], 3);
	printf("Memmove return: %s\n", str25);
	ft_memmove(&str26[2], &str26[3], 3);
	printf("ft_memmove return: %s\n", str26);
	if (strcmp(str25, str26) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 6. FT_MEMCHR
	*/

	char	*str27;
	char	str28[11] = "abcdefghij";
	char	*str29;
	char	str30[11] = "abcdefghij";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCHR\x1b[0m");
	printf("Initial: %s\n", str28);
	str27 = memchr(str28, 'e', 8);
	printf("Memchr return: %s\n", str27);
	str29 = ft_memchr(str30, 'e', 8);
	printf("ft_memchr return: %s\n", str29);
	if (strcmp(str27, str29) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 7. FT_MEMCMP
	*/

	char	str31[11] = "abcdefghij";
	char	str32[11] = "abcdefghij";
	char	str33[11] = "ab45efghij";
	char	str34[11] = "abcdefghij";
	int		intg;
	int		intg2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCMP\x1b[0m");
	printf("Initial: %s\n", str31);
	printf("Initial: %s\n", str32);
	intg = memcmp(str31, str32, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str31, str32, 8);
	printf("ft_memcmp return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str31);
	printf("Initial: %s\n", str32);
	intg = memcmp(str31, str32, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str31, str32, 8);
	printf("ft_memcmp return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str33);
	printf("Initial: %s\n", str34);
	intg = memcmp(str33, str34, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str33, str34, 8);
	printf("ft_memcmp return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 8. FT_STRLEN
	*/

	char	str35[11] = "abcdefghij";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRLEN\x1b[0m");
	printf("Initial: %s\n", str35);
	intg = strlen(str35);
	printf("Strlen return: %d\n", intg);
	intg2 = ft_strlen(str35);
	printf("ft_strlen return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 9. FT_STRDUP
	*/

	char	str36[11] = "abcdefghij";
	char	*str37;
	char	*str38;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRDUP\x1b[0m");
	printf("Initial: %s\n", str36);
	str37 = strdup(str36);
	printf("Strdup return: %s\n", str37);
	str38 = ft_strdup(str36);
	printf("ft_strdup return: %s\n", str38);
	if (strcmp(str37, str38) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 10. FT_STRCPY
	*/

	char	str39[11] = "abcdefghij";
	char	str40[11];
	char	str41[11];

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCPY\x1b[0m");
	printf("Initial: %s\n", str39);
	strcpy(str40, str39);
	printf("Strcpy return: %s\n", str40);
	ft_strcpy(str41, str39);
	printf("ft_strcpy return: %s\n", str41);
	if (strcmp(str40, str41) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 11. FT_STRNCPY
	*/

	char	str42[11] = "abcdefghij";
	char	str43[20];
	char	str44[20];

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNCPY\x1b[0m");
	printf("Initial: %s\n", str42);
	strncpy(str43, str42, 15);
	printf("Strncpy return: %s\n", str43);
	ft_strncpy(str44, str42, 15);
	printf("ft_strncpy return: %s\n", str44);
	if (strcmp(str43, str44) == 0 && str43[14] == str44[14])
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 12. FT_STRCAT
	*/

	char	str45[6] = "abcd";
	char	str46[11] = "12345";
	char	str47[11] = "12345";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCAT\x1b[0m");
	printf("Initial: %s\n", str46);
	strcat(str46, str45);
	printf("Strcat return: %s\n", str46);
	ft_strcat(str47, str45);
	printf("ft_strcat return: %s\n", str47);
	if (strcmp(str46, str47) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 13. FT_STRNCAT
	*/

	char	str48[6] = "abcd";
	char	str49[11] = "12345";
	char	str50[11] = "12345";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNCAT\x1b[0m");
	printf("Initial: %s\n", str49);
	strncat(str49, str48, 2);
	printf("Strncat return: %s\n", str49);
	ft_strncat(str50, str48, 2);
	printf("ft_strncat return: %s\n", str50);
	if (strcmp(str49, str50) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 14. FT_STRLCAT
	*/

	char	str51[6] = "abcd";
	char	str52[11] = "12345";
	char	str53[11] = "12345";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRLCAT\x1b[0m");
	printf("Initial: %s\n", str52);
	strlcat(str52, str51, 11);
	printf("Strlcat return: %s\n", str52);
	ft_strlcat(str53, str51, 11);
	printf("ft_strlcat return: %s\n", str53);
	if (strcmp(str52, str53) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 15. FT_STRCHR
	*/

	char	str54[11] = "1234567890";
	char	*str55;
	char	*str56;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCHR\x1b[0m");
	printf("Initial: %s\n", str54);
	str55 = strchr(str54, '4');
	printf("Strchr return: %s\n", str55);
	str56 = ft_strchr(str54, '4');
	printf("ft_strchr return: %s\n", str56);
	if (strcmp(str55, str56) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 16. FT_STRRCHR
	*/

	char	str57[11] = "1234567490";
	char	*str58;
	char	*str59;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRRCHR\x1b[0m");
	printf("Initial: %s\n", str57);
	str58 = strrchr(str57, '4');
	printf("Strrchr return: %s\n", str58);
	str59 = ft_strrchr(str57, '4');
	printf("ft_strrchr return: %s\n", str59);
	if (strcmp(str58, str59) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 17. FT_STRSTR
	*/

	char	str60[11] = "1234567890";
	char	str61[3] = "78";
	char	*str62;
	char	*str63;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRSTR\x1b[0m");
	printf("Initial: %s\n", str60);
	str62 = strstr(str60, str61);
	printf("Strstr return: %s\n", str62);
	str63 = ft_strstr(str60, str61);
	printf("ft_strstr return: %s\n", str63);
	if (strcmp(str62, str63) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 18. FT_STRNSTR
	*/

	char	str64[11] = "1234567890";
	char	str65[3] = "78";
	char	*str67;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNSTR\x1b[0m");
	printf("Initial: %s\n", str64);
	str67 = ft_strnstr(str64, str65, 8);
	printf("ft_strnstr return: %s\n", str67);
	if (strcmp(str67, "7890") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 19. FT_STRCMP
	*/

	char	str68[11] = "1234567890";
	char	str69[11] = "123456ab90";
	int		intg3;
	int		intg4;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCMP\x1b[0m");
	printf("Initial: %s\n", str68);
	printf("Initial: %s\n", str68);
	intg3 = strcmp(str68, str68);
	printf("Strcmp return: %d\n", intg3);
	intg4 = ft_strcmp(str68, str68);
	printf("ft_strcmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str68);
	printf("Initial: %s\n", str69);
	intg3 = strcmp(str68, str69);
	printf("Strcmp return: %d\n", intg3);
	intg4 = ft_strcmp(str68, str69);
	printf("ft_strcmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 20. FT_STRNCMP
	*/

	char	str70[11] = "1234567890";
	char	str71[11] = "123456ab90";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNCMP\x1b[0m");
	printf("Initial: %s\n", str70);
	printf("Initial: %s\n", str71);
	intg3 = strncmp(str70, str71, 10);
	printf("Strncmp return: %d\n", intg3);
	intg4 = ft_strncmp(str70, str71, 10);
	printf("ft_strncmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str70);
	printf("Initial: %s\n", str71);
	intg3 = strncmp(str70, str71, 3);
	printf("Strncmp return: %d\n", intg3);
	intg4 = ft_strncmp(str71, str71, 3);
	printf("ft_strncmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 21. FT_ATOI
	*/

	char	str72[] = "-2147483648";
	char	str73[] = " 2147483647";
	char	str74[] = "         56";
	char	str75[] = "        -56";
	char	str76[] = "        +56";
	char	str77[] = "       +-56";
	char	str78[] = "      abc56";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ATOI\x1b[0m");
	printf("Initial: %s\n", str72);
	intg3 = atoi(str72);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str72);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str73);
	intg3 = atoi(str73);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str73);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str74);
	intg3 = atoi(str74);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str74);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str75);
	intg3 = atoi(str75);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str75);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str76);
	intg3 = atoi(str76);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str76);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str77);
	intg3 = atoi(str77);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str77);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str78);
	intg3 = atoi(str78);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str78);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 22. FT_ISALPHA
	*/

	int		intg5;
	int		intg6;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISALPHA\x1b[0m");
	printf("Initial: %c\n", 118);
	intg5 = isalpha(118);
	printf("Isalpha return: %d\n", intg5);
	intg6 = ft_isalpha(118);
	printf("ft_isalpha return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isalpha(32);
	printf("Isalpha return: %d\n", intg5);
	intg6 = ft_isalpha(32);
	printf("ft_isalpha return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 23. FT_ISDIGIT
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISDIGIT\x1b[0m");
	printf("Initial: %c\n", 51);
	intg5 = isdigit(51);
	printf("Isdigit return: %d\n", intg5);
	intg6 = ft_isdigit(51);
	printf("ft_isdigit return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isdigit(32);
	printf("Isdigit return: %d\n", intg5);
	intg6 = ft_isalpha(32);
	printf("ft_isdigit return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 24. FT_ISALNUM
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISALNUM\x1b[0m");
	printf("Initial: %c\n", 51);
	intg5 = isalnum(51);
	printf("Isalnum return: %d\n", intg5);
	intg6 = ft_isalnum(51);
	printf("ft_isalnum return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isalnum(32);
	printf("Isalnum return: %d\n", intg5);
	intg6 = ft_isalnum(32);
	printf("ft_isalnum return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 118);
	intg5 = isalnum(118);
	printf("Isalnum return: %d\n", intg5);
	intg6 = ft_isalnum(118);
	printf("ft_isalnum return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 25. FT_ISASCII
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISASCII\x1b[0m");
	printf("Initial: %c\n", 51);
	intg5 = isascii(51);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(51);
	printf("ft_isascii return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isascii(32);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(32);
	printf("ft_isascii return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 118);
	intg5 = isascii(118);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(118);
	printf("ft_isascii return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 571);
	intg5 = isascii(571);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(571);
	printf("ft_isascii return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 26. FT_ISPRINT
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISPRINT\x1b[0m");
	printf("Initial: %c\n", 0);
	intg5 = isprint(0);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(0);
	printf("ft_isprint return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isprint(32);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(32);
	printf("ft_isprint return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 118);
	intg5 = isprint(118);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(118);
	printf("ft_isprint return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 127);
	intg5 = isprint(127);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(127);
	printf("ft_isprint return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 27. FT_TOUPPER
	*/
	char ch;
	char ch2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_TOUPPER\x1b[0m");
	printf("Initial: %c\n", 118);
	ch = toupper(118);
	printf("toupper return: %c\n", ch);
	ch2 = ft_toupper(118);
	printf("ft_toupper return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	ch = toupper(32);
	printf("toupper return: %c\n", ch);
	ch2 = ft_toupper(32);
	printf("ft_toupper return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 86);
	ch = toupper(86);
	printf("toupper return: %c\n", ch);
	ch2 = ft_toupper(86);
	printf("ft_toupper return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 28. FT_TOLOWER
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_TOLOWER\x1b[0m");
	printf("Initial: %c\n", 118);
	ch = tolower(118);
	printf("tolower return: %c\n", ch);
	ch2 = ft_tolower(118);
	printf("ft_tolower return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	ch = tolower(32);
	printf("tolower return: %c\n", ch);
	ch2 = ft_tolower(32);
	printf("ft_tolower return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 86);
	ch = tolower(86);
	printf("tolower return: %c\n", ch);
	ch2 = ft_tolower(86);
	printf("ft_tolower return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* II. PART II.
	* 1. FT_MEMALLOC
	*/

	char	*str79;
	char	*str80;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMALLOC\x1b[0m");
	str79 = (char *)ft_memalloc(5);
	if (str79 && str79[0] == '\0' && str79[1] == '\0' && str79[2] == '\0' && str79[3] == '\0' && str79[4] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str79);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	str80 = (char *)ft_memalloc(50);
	if (str80 && str80[0] == '\0' && str80[49] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str80);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	**
	* 2. FT_MEMDEL
	*

	void	*vd;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMDEL\x1b[0m");
	vd = malloc(10);
	if (vd)
	{
		ft_memdel(&vd);
		if (vd == NULL)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
			free(vd);
		}
	}

	/**
	* 3. FT_STRNEW
	*/

	char	*str81;
	char	*str82;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNEW\x1b[0m");
	str81 = ft_strnew(5);
	if (str81 && str81[0] == '\0' && str81[1] == '\0' && str81[2] == '\0' && str81[3] == '\0' && str81[4] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str81);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	str82 = ft_strnew(50);
	if (str82 && str82[0] == '\0' && str82[49] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		free(str82);
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 4. FT_STRDEL
	*/

	char	*str83;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRDEL\x1b[0m");
	str83 = (char *)malloc(sizeof(char) * 10);
	if (str83)
	{
		ft_strdel(&str83);
		if (str83 == NULL)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
			free(str83);
		}
	}

	/**
	* 5. FT_STRCLR
	*/

	char	str84[6] = "hello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCLR\x1b[0m");
	printf("Initial: %s\n", str84);
	ft_strclr(str84);
	printf("ft_strclr return: %s\n", str84);
	if (str84[0] == '\0' && str84[1] == '\0' && str84[2] == '\0' && str84[3] == '\0' && str84[4] == '\0')
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 6. FT_STRITER
	*/

	char	str85[6] = "hello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRITER\x1b[0m");
	printf("Initial: %s\n", str85);
	ft_striter(str85, &striter_test);
	printf("ft_striter return: %s\n", str85);
	if (strcmp(str85, "zzzzz") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 7. FT_STRITERI
	*/


	char	str86[6] = "hello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRITERI\x1b[0m");
	printf("Initial: %s\n", str86);
	ft_striteri(str86, &striteri_test);
	printf("ft_striteri return: %s\n", str86);
	if (strcmp(str86, "01234") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 8. FT_STRMAP
	*/

	char	str87[6] = "hello";
	char	*str88;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRMAP\x1b[0m");
	printf("Initial: %s\n", str87);
	str88 = ft_strmap(str87, &strmap_test);
	printf("ft_strmap return: %s\n", str88);
	if (strcmp(str87, str88) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 9. FT_STRMAPI
	*/

	char	str89[6] = "hello";
	char	*str90;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRMAPI\x1b[0m");
	printf("Initial: %s\n", str89);
	str90 = ft_strmapi(str89, &strmapi_test);
	printf("ft_strmapi return: %s\n", str90);
	if (strcmp(str90, "01234") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 9. FT_STREQU
	*/

	char	str91[6] = "hello";
	char	str92[6] = "hel45";
	int		intg7;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STREQU\x1b[0m");
	printf("Initial: %s\n", str91);
	intg7 = ft_strequ(str91, str91);
	printf("ft_strequ return: %d\n", intg7);
	if (intg7 == 1)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str91);
	printf("Initial: %s\n", str92);
	intg7 = ft_strequ(str91, str92);
	printf("ft_strequ return: %d\n", intg7);
	if (intg7 == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 10. FT_STRNEQU
	*/
  
	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNEQU\x1b[0m");
	printf("Initial: %s\n", str91);
	intg7 = ft_strnequ(str91, str91, 5);
	printf("ft_strnequ return: %d\n", intg7);
	if (intg7 == 1)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str91);
	printf("Initial: %s\n", str92);
	intg7 = ft_strnequ(str91, str92, 5);
	printf("ft_strnequ return: %d\n", intg7);
	if (intg7 == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str91);
	printf("Initial: %s\n", str92);
	intg7 = ft_strnequ(str91, str92, 2);
	printf("ft_strnequ return: %d\n", intg7);
	if (intg7 == 1)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 11. FT_STRSUB
	*/
 
	char	str93[6] = "hello";
	char	*str94;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRSUB\x1b[0m");
	printf("Initial: %s\n", str93);
	str94 = ft_strsub(str93, 2, 5);
	printf("ft_strsub return: %s\n", str94);
	if (strcmp(str94, "llo") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 12. FT_STRJOIN
	*/

	char	str95[3] = "he";
	char	str96[4] = "llo";
	char	*str97;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRJOIN\x1b[0m");
	printf("Initial: %s\n", str95);
	printf("Initial: %s\n", str96);
	str97 = ft_strjoin(str95, str96);
	printf("ft_strjoin return: %s\n", str97);
	if (strcmp(str97, "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 13. FT_STRTRIM
	*/

	char	str105[] = "     hello    ";
	char	*str106;
	char	str107[] = "\t\n hello    ";
	char	*str108;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRTRIM\x1b[0m");
	printf("Initial: %s\n", str105);
	str106 = ft_strtrim(str105);
	printf("ft_strtrim return: %s\n", str106);
	if (strcmp(str106, "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str107);
	str108 = ft_strtrim(str107);
	printf("ft_strtrim return: %s\n", str108);
	if (strcmp(str108, "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 14. FT_STRSPLIT
	*/

	char	str119[] = "hello***hello***hello";
	char	**arr;
	char	str120[] = "iiiiiihelloiihelloihelloiiii";
	char	**arr2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRSPLIT\x1b[0m");
	printf("Initial: %s\n", str119);
	arr = ft_strsplit(str119, '*');
	printf("ft_strtrim return: \n[0] %s\n[1] %s\n[2] %s\n", arr[0], arr[1], arr[2]);
	if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "hello") == 0 && strcmp(arr[2], "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str120);
	arr2 = ft_strsplit(str120, 'i');
	printf("ft_strtrim return: \n[0] %s\n[1] %s\n[2] %s\n", arr2[0], arr2[1], arr2[2]);
	if (strcmp(arr[0], "hello") == 0 && strcmp(arr[1], "hello") == 0 && strcmp(arr[2], "hello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 15. FT_ITOA
	*/

	char	*str109;
	char	*str110;
	char	*str111;
	char	*str114;
	char	*str115;
	char	str118[2] = "8";
	char	str112[3] = "42";
	char	str113[4] = "-42";
	char	str116[12] = "-2147483648";
	char	str117[11] = "2147483647";
	int		intg8 = 8;
	int		intg9 = 42;
	int		intg10 = -42;
	int		intg11 = -2147483648;
	int		intg12 = 2147483647;


	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ITOA\x1b[0m");
	printf("Initial: %d\n", intg8);
	str109 = ft_itoa(intg8);
	printf("ft_itoa return: %s\n", str109);
	if (strcmp(str109, str118) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg9);
	str110 = ft_itoa(intg9);
	printf("ft_itoa return: %s\n", str110);
	if (strcmp(str110, str112) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg10);
	str111 = ft_itoa(intg10);
	printf("ft_itoa return: %s\n", str111);
	if (strcmp(str111, str113) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg11);
	str114 = ft_itoa(intg11);
	printf("ft_itoa return: %s\n", str114);
	if (strcmp(str114, str116) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %d\n", intg12);
	str115 = ft_itoa(intg12);
	printf("ft_itoa return: %s\n", str115);
	if (strcmp(str115, str117) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 16. FT_PUTCHAR
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTCHAR\x1b[0m");
	printf("Initial: %c\n", 'a');
	ft_putstr("ft_putchar return: ");
	ft_putchar('a');
	ft_putchar('\n');

	/**
	* 17. FT_PUTSTR
	*/

	char	str98[6] = "hello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTSTR\x1b[0m");
	printf("Initial: %s\n", str98);
	ft_putstr("ft_putstr return: ");
	ft_putstr(str98);
	ft_putchar('\n');

	/**
	* 18. FT_PUTENDL
	*/

	char	str99[6] = "hello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTENDL\x1b[0m");
	printf("Initial: %s\n", str99);
	ft_putstr("ft_putendl return: ");
	ft_putendl(str99);

	/**
	* 19. FT_PUTNBR
	*/

	int		intg13 = 42;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTNBR\x1b[0m");
	printf("Initial: %d\n", intg13);
	ft_putstr("ft_putnbr return: ");
	ft_putnbr(intg13);
	ft_putchar('\n');

	/**
	* 20. FT_PUTCHAR_FD
	*/

	int		fd;
	char	ch3;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTCHAR_FD\x1b[0m");
	printf("Initial: %c\n", 'a');
	fd = open("put1.txt", O_CREAT | O_WRONLY,  S_IRUSR | S_IWUSR);
	if (fd)
	{
		ft_putchar_fd('a', fd);
		close(fd);
		fd = open("put1.txt", O_RDONLY);
		if (fd)
		{
			read(fd, &ch3, 1);
			ft_putstr("ft_putchar_fd return: ");
			ft_putchar(ch3);
			ft_putchar('\n');
			close(fd);
		}
	}

	/**
	* 21. FT_PUTSTR_FD
	*/

	char	str100[6] = "hello";
	char	str101[6];
	int		fd2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTSTR_FD\x1b[0m");
	printf("Initial: %s\n", str100);
	fd2 = open("put2.txt", O_CREAT | O_WRONLY,  S_IRUSR | S_IWUSR);
	if (fd2)
	{
		ft_putstr_fd(str100, fd2);
		close(fd2);
		fd2 = open("put2.txt", O_RDONLY);
		if (fd2)
		{
			read(fd2, str101, 5);
			ft_putstr("ft_putstr_fd return: ");
			ft_putchar(str101[0]);
			ft_putchar(str101[1]);
			ft_putchar(str101[2]);
			ft_putchar(str101[3]);
			ft_putchar(str101[4]);
			ft_putchar('\n');
			close(fd2);
		}
	}

	/**
	* 22. FT_PUTENDL_FD
	*/
  
	char	str102[6] = "hello";
	char	str103[6];
	int		fd3;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTENDL_FD\x1b[0m");
	printf("Initial: %s\n", str102);
	fd3 = open("put3.txt", O_CREAT | O_WRONLY,  S_IRUSR | S_IWUSR);
	if (fd3)
	{
		ft_putstr_fd(str102, fd3);
		close(fd3);
		fd3 = open("put3.txt", O_RDONLY);
		if (fd3)
		{
			read(fd3, str103, 5);
			ft_putstr("ft_putendl_fd return: ");
			ft_putchar(str103[0]);
			ft_putchar(str103[1]);
			ft_putchar(str103[2]);
			ft_putchar(str103[3]);
			ft_putchar(str103[4]);
			ft_putchar('\n');
			close(fd3);
		}
	}

	/**
	* 23. FT_PUTNBR_FD
	*/
  
	int		intg14 = 42;
	char	str122[5];
	int		fd4;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_PUTNBR_FD\x1b[0m");
	printf("Initial: %d\n", intg14);
	fd4 = open("put4.txt", O_CREAT | O_WRONLY,  S_IRUSR | S_IWUSR);
	if (fd4)
	{
		ft_putnbr_fd(intg14, fd4);
		close(fd4);
		fd4 = open("put4.txt", O_RDONLY);
		if (fd4)
		{
			read(fd4, str122, 5);
			ft_putstr("ft_putnbr_fd return: ");
			ft_putchar(str122[0]);
			ft_putchar(str122[1]);
			ft_putchar('\n');
			close(fd4);
		}
	}

	/**
	* III. BONUS PART
	* 1. FT_LSTNEW
	*/
  
	char	str104[6] = "hello";
	t_list	*lst;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_LSTNEW\x1b[0m");
	printf("Initial: %s\n", str104);
	lst = ft_lstnew((void *)str104, 5);
	printf("ft_lstnew return: %s, %ld\n", (char *)lst->content, lst->content_size);
	if (lst && strcmp((char *)lst->content, "hello") == 0 && lst->content_size == 5)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	free(lst->content);
	lst->content_size = 0;
	free(lst);
	lst = NULL;

	/**
	* 2. FT_LSTDELONE
	*/
  
	t_list	*lst2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_LSTDELONE\x1b[0m");
	lst2 = ft_lstnew((void *)"hello", 5);
	if (lst2)
	{
		printf("Initial: %s\n", (char *)lst2->content);
		ft_lstdelone(&lst2, &lstdelone_test);
		if (lst2 == NULL && sign)
		{
			sign = 0;
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
		}
	}

	/**
	* 3. FT_LSTDEL
	*/
/*  
	t_list	*lst3;
	t_list	*lst4;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_LSTDEL\x1b[0m");
	lst3 = ft_lstnew((void *)"hello", 5);
	lst4 = ft_lstnew((void *)"hello", 5);
	if (lst3 && lst4)
	{
		lst3->next = lst4;
		printf("Initial: %s, %s\n", "lst1", "lst2");
		ft_lstdel(&lst3, &lstdelone_test);
		if (lst3 == NULL && sign == 2)
		{
			sign = 0;
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
			free(lst3);
			free(lst4);
		}
	}

	/**
	* 4. FT_LSTADD
	*/
/*  
	t_list	*lst5;
	t_list	*lst6;
	t_list	*lst7;
	t_list	*cp_lst;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_LSTADD\x1b[0m");
	lst5 = ft_lstnew((void *)"hello", 5);
	lst6 = ft_lstnew((void *)"hello", 5);
	lst7 = ft_lstnew((void *)"hello", 5);
	if (lst5 && lst6 && lst7)
	{
		lst5->next = lst6;
		cp_lst = lst5;
		printf("Initial: %s, %s\n", "lst1", "lst2");
		printf("Initial: %s\n", "lst3");
		ft_lstadd(&lst5, lst7);
		if (lst5->next == cp_lst)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
		}
		free(cp_lst->content);
		cp_lst->content_size = 0;
		free(cp_lst);
		cp_lst = NULL;
		free(lst6->content);
		lst6->content_size = 0;
		free(lst6);
		lst6 = NULL;
		free(lst5->content);
		lst5->content_size = 0;
		free(lst5);
		lst5 = NULL;
	}

	/**
	* 5. FT_LSTITER
	*/
/*  
	t_list	*lst8;
	t_list	*lst9;
	t_list	*lst10;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_LSTITER\x1b[0m");
	lst8 = ft_lstnew((void *)"hello", 5);
	lst9 = ft_lstnew((void *)"hello", 5);
	lst10 = ft_lstnew((void *)"hello", 5);
	if (lst8 && lst9 && lst10)
	{
		lst8->next = lst9;
		lst9->next = lst10;
		printf("Initial: %s, %s, %s\n", "lst1", "lst2", "lst3");
		ft_lstiter(lst8, &lstiter_test);
		if (sign2 == 3)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
		}
		sign2 = 0;
		free(lst8->content);
		lst8->content_size = 0;
		free(lst8);
		lst8 = NULL;
		free(lst9->content);
		lst9->content_size = 0;
		free(lst9);
		lst9 = NULL;
		free(lst10->content);
		lst10->content_size = 0;
		free(lst10);
		lst10 = NULL;
	}

	/**
	* 6. FT_LSTMAP
	*/
/*  
	t_list	*lst11;
	t_list	*lst12;
	t_list	*lst13;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_LSTMAP\x1b[0m");
	lst11 = ft_lstnew((void *)"hello", 5);
	lst12 = ft_lstnew((void *)"hello", 5);
	if (lst11 && lst12)
	{
		lst11->next = lst12;
		printf("Initial: %s, %s\n", "lst1", "lst2");
		lst13 = ft_lstmap(lst11, &lstmap_test);
		if (lst13 && lst13->next && lst13->content_size == 5 && lst13->next->content_size == 5)
		{
			printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
		}
		else
		{
			printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
		}
		free(lst11->content);
		lst11->content_size = 0;
		free(lst11);
		lst11 = NULL;
		free(lst12->content);
		lst12->content_size = 0;
		free(lst12);
		lst12 = NULL;
		// free(lst13->content);
		lst13->content_size = 0;
		free(lst13);
		lst13 = NULL;
	}
*/
	return (0);
}

