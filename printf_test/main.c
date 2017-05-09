#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int ret;


	ret = ft_printf("%+.0d\n", 0);
	printf("%d\n", ret);
	
	ret = printf("%+.0d\n", 0);
	printf("%d\n", ret);
	return (0);
}
