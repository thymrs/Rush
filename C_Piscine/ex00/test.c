if ((col == 1 && col == 1) || (col == x && row == y))
{
	ft_putchar('/')
}
else if ((col != 1 || col != x) && (row == 1 || row == y))
{
	ft_putchar('*')
}
else if ((col == x && row == y) || (col == 1 && row == y))
{
	ft_putchar('\\')
}
else
{
	ft_putchar(' ')
}
