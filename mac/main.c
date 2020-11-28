/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttarumot <ttarumot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 03:05:49 by ttarumot          #+#    #+#             */
/*   Updated: 2020/11/28 03:09:25 by ttarumot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_strlen(char *str);

int     main(void)
{
    int     len;

    len = ft_strlen("test");
    printf("%d", len);
}