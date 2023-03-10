void my_putchar(char c);

int my_put_nbr(int n)
{   
    if (n < 0) {
        n = n * -1;
        my_putchar('-');
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
        my_putchar(n % 10 + '0');
    } else if (n < 10) {
        my_putchar(n + '0');
    } else {
        my_putchar('-');
        n = -n; 
    }
    return n;
}
