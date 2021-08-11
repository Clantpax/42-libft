#include "libft.h"
/*
static size_t    wrd_cnt(char *str, char c)
{
    size_t    count;

    count = 0;
    while (*str)
    {
        if (*str != c)
        {
            count++;
            while (*str && *str != c)
                str++;
            continue ;
        }
        str++;
    }
    return (count);
}

static void    split(char **s, char c, char ***arr, int *arr_i)
{
    size_t    start;
    size_t    end;
    int        i;

    start = 0;
    while ((*s)[start])
    {
        while ((*s)[start] && (*s)[start] == c)
            start++;
        if (start >= ft_strlen(*s))
            return ;
        end = start;
        while ((*s)[end] && (*s)[end] != c)
            end++;
        (*arr)[*arr_i] = malloc(end - start + 1);
        i = 0;
        while (start < end)
            (*arr)[*arr_i][i++] = (*s)[start++];
        (*arr)[(*arr_i)++][i] = '\0';
    }
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    int        arr_i;

    if (!s)
        return (NULL);
    arr = (char **) malloc(sizeof(char *) * wrd_cnt((char *) s, c) + 1);
    if (!arr)
        return (NULL);
    arr_i = 0;
    split((char **) &s, c, &arr, &arr_i);
    arr[arr_i] = NULL;
    return (arr);
}

static size_t    ft_getcount(const char *s, const char c)
{
    size_t    count;
    size_t    i;

    i = 0;
	count = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i] != c && s[i])
        {
            count++;
            while (s[i] != c && s[i])
                i++;
        }
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char    **str;
    size_t    i;
    size_t    j;
    size_t    count;
    size_t    len;

    i = 0;
    j = 0;
    count = ft_getcount(s, c);
    str = malloc(sizeof(s) * (count + 1));
    if (!str)
        return (0);
    while (j < count)
    {
        len = 0;
        while (s[i] == c)
            i++;
        while (s[i + len] != c && s[i + len])
            len++;
        str[j] = malloc(sizeof(*s) * len + 1);
        ft_strlcpy(str[j++], s + i, len + 1);
        i += len + 1;
    }
    str[j] = '\0';
    return (str);
}

int main()
{
    char **tab = ft_split("oounoo doos tre  42o",'o');
    size_t i = 0;
    while (i < ft_getcount("oounoo doos tre  42o",'o'))
    {
        printf("%s\n", tab[i]);
        i++;
    }
}

int main()
{
    char **res = ft_split("ahhaahhahhahha", 'a');
    int i = 0;
    while (res[i])
        printf("%s\n", res[i++]);
    return (0);
}
*/