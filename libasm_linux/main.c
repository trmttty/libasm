/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarumot <ttarumot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 03:05:49 by ttarumot          #+#    #+#             */
/*   Updated: 2020/12/04 04:19:01 by ttarumot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <limits.h>

size_t      ft_strlen(const char *s);
char        *ft_strcpy(char * dst, const char * src);
int         ft_strcmp(const char *s1, const char *s2);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
char        *ft_strdup(const char *s1);

void    test_strlen()
{
    char test[][50] = {"abc", "0123456789", ""};

    printf("\x1b[33m"); 
    printf("\n------------------ ft_strlen ------------------\n\n");
    printf("\x1b[39m"); 

    int i = -1;
    while (++i < 3)
    {
        printf("\x1b[35m"); 
        printf("case :       %s\n", test[i]);
        printf("\x1b[36m"); 
        printf("strlen :     %10lu\n", strlen(test[i]));
        printf("ft_strlen :  %10lu\n", ft_strlen(test[i]));
        printf("\x1b[39m"); 
        printf("\n");
    }
}

void    test_strcpy()
{
    char dist[][50] = {"abc", "0123456789", ""};
    char src[][50] = {"12345", "abcdef", "aaa"};

    printf("\x1b[33m"); 
    printf("\n------------------ ft_strcpy ------------------\n\n");
    printf("\x1b[39m"); 

    int i = -1;
    while (++i < 3)
    {
        printf("\x1b[35m"); 
        printf("case :       dist: %s, src: %s\n", dist[i], src[i]);
        printf("\x1b[36m"); 
        printf("strcpy :     %10s\n", strcpy(dist[i], src[i]));
        printf("ft_strcpy :  %10s\n", ft_strcpy(dist[i], src[i]));
        printf("\x1b[39m"); 
        printf("\n");
    }
}

void    test_strcmp()
{
    char s1[][50] = {"abc", "0123456789", "", ""};
    char s2[][50] = {"12345", "abcdef", "aaa", ""};

    printf("\x1b[33m"); 
    printf("\n------------------ ft_strcmp ------------------\n\n");
    printf("\x1b[39m"); 

    int i = -1;
    while (++i < 4)
    {
        printf("\x1b[35m"); 
        printf("case :       s1: %s, s2: %s\n", s1[i], s2[i]);
        printf("\x1b[36m"); 
        printf("strcmp :     %10d\n", strcmp(s1[i], s2[i]));
        printf("ft_strcmp :  %10d\n", ft_strcmp(s1[i], s2[i]));
        printf("\x1b[39m"); 
        printf("\n");
    }
}

void    test_write()
{
    int     fd[] = {1, 2, 100, -1, 1};
    char    buf[][50] = {"12345", "abcdef", "aaa", "", "test"};
    size_t  nbyte[] = {5, 80, 3, 1, -1};
    ssize_t ret;

    printf("\x1b[33m"); 
    printf("\n------------------ ft_write ------------------\n\n");
    printf("\x1b[39m"); 

    int i = -1;
    while (++i < 5)
    {
        printf("\x1b[35m"); 
        printf("case :       fd: %d, buf: %s, nbyte: %zd\n", fd[i], buf[i], nbyte[i]);
        printf("\x1b[36m"); 
        fflush(stdout);
       
        write(1, "[ write ]\n", 11);
        write(1, "output : ", 10);
        errno = 0;
        ret = write(fd[i], buf[i], nbyte[i]);
        printf("\nreturn value : %zd\n", ret); 
        printf("errno : %d -> %s\n", errno, strerror(errno)); 
        printf("\n");
        
        write(1, "[ ft_write ]\n", 14);
        write(1, "output : ", 10);
        errno = 0;
        ret = ft_write(fd[i], buf[i], nbyte[i]);
        printf("\nreturn value : %zd\n", ret); 
        printf("errno : %d -> %s\n", errno, strerror(errno)); 
      
        printf("\x1b[39m"); 
        printf("\n");
    }
}

void    test_read()
{
    int     fd[] = {3, 3, 3, -1, 3};
    char    buf[100];
    size_t  nbyte[] = {5, 8, 10, 5, -10};
    ssize_t ret;

    printf("\x1b[33m"); 
    printf("\n------------------ ft_read ------------------\n\n");
    printf("\x1b[39m"); 

    int i = -1;
    while (++i < 5)
    {
        int  open_fd;

        printf("\x1b[35m"); 
        printf("case :       fd: %d, nbyte: %zd\n", fd[i], nbyte[i]);
        printf("\x1b[36m"); 
        fflush(stdout);

        printf("fd: %d\n", fd[i]); 
        write(1, "[ read ]\n", 10);
        errno = 0;
        open_fd = open("main.c", O_RDONLY);
        ret = read(fd[i], buf, nbyte[i]);
        close(open_fd);
        printf("return value : %zd\n", ret); 
        printf("errno : %d -> %s\n", errno, strerror(errno)); 
        printf("\n");
        
        write(1, "[ ft_read ]\n", 14);
        errno = 0;
        open_fd = open("main.c", O_RDONLY);
        ret = ft_read(fd[i], buf, nbyte[i]);
        close(open_fd);
        printf("return value : %zd\n", ret); 
        printf("errno : %d -> %s\n", errno, strerror(errno)); 
      
        printf("\x1b[39m"); 
        printf("\n");
    }
}

void    test_strdup()
{
    char str[][50] = {"abc", "0123456789", ""};

    printf("\x1b[33m"); 
    printf("\n------------------ ft_strdup ------------------\n\n");
    printf("\x1b[39m"); 

    int i = -1;
    while (++i < 3)
    {
        printf("\x1b[35m"); 
        printf("case :       str: %s\n", str[i]);
        printf("\x1b[36m"); 
        printf("strdup :     %10s\n", strdup(str[i]));
        printf("ft_strdup :  %10s\n", ft_strdup(str[i]));
        printf("\x1b[39m"); 
        printf("\n");
    }
}
int     main(void)
{
    test_strlen();
    test_strcpy();
    test_strcmp();
    test_write();
    test_read();
    test_strdup();
    
    return (0);
}