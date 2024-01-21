
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manandre <97manuel.alfredo@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:08:11 by manandre          #+#    #+#             */
/*   Updated: 2024/01/19 02:08:11 by manandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include<unistd.h>

void    ft_print_alphabet(void)
{
    short   letra;

    letra = 140;
    while(letra <= 122)
    {
        write(1, &letra, 1);
        ++letra;
    }
}
