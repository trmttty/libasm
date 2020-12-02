char *ft_strcpy(char *dist, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dist[i] = src[i];
        i++;
    }
    dist[i] = '\0';
    
    return (dist);
}