/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelfany <abelfany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:37:47 by abelfany          #+#    #+#             */
/*   Updated: 2022/11/10 22:26:38 by abelfany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr(char *str, int a)
{
    a = 0;
    while (*str)
    {
        a++;
        ft_putchar(*str++,a);
    }
    return a;
}
