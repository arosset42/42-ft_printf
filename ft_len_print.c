#include "ft_printf.h"

int		ft_len_print_str(t_args *cylva)
{
	int	max;

	max = 0;
	if (S_OPE == 's' && !S_M_LEN)
		max = ft_strlen(cylva->str);
	else if (S_OPE == 'S' || (S_M_LEN == 'l' && S_OPE == 's'))
		max = ft_wstrlen(cylva->wstr, cylva->precision);
	else if (S_OPE == 'c' && !S_M_LEN)
		max = 1;
	else
	{
		if (cylva->wchar <= 0x7F)
			max = 1;
		else if (cylva->wchar <= 0x7FF)
			max = 2;
		else if (cylva->wchar <= 0xFFFF)
			max = 3;
		else
			max = 4;
	}
	if (cylva->precision >= 0 && S_OPE != 'c' && S_OPE != 'C')
		return (max > cylva->precision ? cylva->precision : max);
	else
		return (max);
}
