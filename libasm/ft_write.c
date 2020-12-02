#include <unistd.h>

int ft_write(int fd, char *s, int len)
{
    int ret;
    ret = write(fd, s, len);
    return ret;
}