/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:49:21 by arosset           #+#    #+#             */
/*   Updated: 2017/01/19 15:49:25 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

int     main(void)
{
    char            *str;
    void            *strvoid;
    int             nbr;
    unsigned int    nbrs;


    nbr = 65;
    nbrs = 42;

    str = "je suis une chaine";
    strvoid = "1";

    printf("convertion s : %s \n", str);

    // printf()

    printf("convertion p : %p \n", strvoid);

    printf("convertion D : %D \n", nbr);

    printf("convertion i : %i \n", nbr);

    printf("convertion o : %o \n", nbrs);

    printf("convertion O : %O \n", nbrs);

    printf("convertion u : %u \n", nbrs);

    printf("convertion U : %U \n", nbrs);

    printf("convertion x : %x \n", nbrs);

    printf("convertion X : %X \n", nbrs);

    printf("convertion c : %c \n", nbr);

    printf("convertion C : %C \n", nbr);

    printf("gerer pourcentage %% \n");

    printf("");

    printf("convertion D avec precision et -: %-.5D \n", nbr);

    printf("convertion D avec precision     : %.5D \n", nbr);
    return (0);
}
