#include <stdlib.h>
#include <stdbool.h>

char    **ft_split(char *str, char *charset);
int     ft_strlen(char *str);
int     ft_word_count(char *str, char *charset);
bool    ft_find_charset(char c, char *charset);
int     ft_word_len(char *str, char *charset);

char    **ft_split(char *str, char *charset)
{
    int         i;
    int         j;
    int         index;
    char        **store;

    store = (char **)malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
    i = 0;
    index = 0;
    while (index < ft_word_count(str, charset))
    {
        store[i] = (char *)malloc(sizeof(char) * (ft_word_len(str, charset) + 1));
        j = 0;
        while (ft_find_charset(*str, charset))
            str++;
        while (*str && !(ft_find_charset(*str, charset)))
            store[i][j++] = *str++;
        store[i][j] = '\0';
        i++;
    }
    store[i] = (void *)0;
    return (store);
}

int     ft_strlen(char *str)
{
    int        i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strndup(char *str, int n)
{
    int        i;
    char        *arr;

    i = 0;
    arr = (char *)malloc(sizeof(char) * (n + 1));
    if (arr == (void *)0)
        return (0);
    while (i < n)
    {
        arr[i] = str[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

int     ft_word_count(char *str, char *charset)
{
    int        i;
    int        j;
    int        count;
    int        check;

    i = -1;
    count = 0;
    check = 1;
    while (++i < ft_strlen(str))
    {
        j = -1;
        while (charset[++j])
        {
            if (str[i] == charset[j])
                check = 1;
            if (check == 1 && str[i] == charset[j])
                break ;
        }
        if (j == ft_strlen(charset) && check == 1)
        {
            count++;
            check = 0;
        }
    }
    return (count);
}

int     ft_word_len(char *str, char *charset)
{
    int         count;

    count = 0;
    while (ft_find_charset(*str, charset))
        str++;
    while (*str && !ft_find_charset(*str, charset))
    {
        str++;
        count++;
    }
    return (count);
}

bool    ft_find_charset(char c, char *charset)
{
    while (1)
    {
        if (*charset == '\0')
            break ;
        if (*charset == c)
            return (true);
        charset++;
    }
    return (false);
}
