/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarumot <ttarumot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 03:05:49 by ttarumot          #+#    #+#             */
/*   Updated: 2020/12/03 23:37:17 by ttarumot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

size_t      ft_strlen(char *str);
char        *ft_strcpy(char *dist, char *src);
int         ft_strcmp(char *, char *);
ssize_t     ft_write(int fd, const void *buf, size_t count);
ssize_t     ft_read(int fd, void *buf, size_t count);
char        *ft_strdup(const char *s);


int     main(void)
{
    // int     len;

    //len = ft_strlen("test");
    // len = ft_strlen("test");
    // printf("%d\n", len);

    // {
    //     char *ret;
    //     char dist[10] = "abc";
    //     char src[] = "efghijk";
    //     ret = ft_strcpy(dist, src);
    //     printf("%s\n", ret);
    // }
    // {
    //     char *s1 = "\xff\xff";
    //     char *s2 = "\xff";
    //     int ret;
    //     ret = ft_strcmp(s1, s2);
    //     printf("%d\n", ret);
    // }
    char s[] = "\xff";
    ft_write(1, NULL, ft_strlen(s));
    perror("err:");
}