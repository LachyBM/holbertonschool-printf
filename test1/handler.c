int poct(va_list args)
{
        unsigned int n = va_arg(args, unsigned int);
        return (print_oct(n));
}

int print_oct(unsigned int n)
{
        int count = 0;
        char c;
        char *digits = "01234567";

        if (n >= 8)
                count += print_oct(n/8);
        c = digits[n % 8];
        count += write(1, &c, 1);
        return (count);
}
int paddr(va_list args)
{
        void *n = va_arg(args, void*);
        return (print_addr(n));
}
int print_addr(void *addr)
{
        int count = 0;
        unsigned long paddr = (unsigned long)addr;

        write(1, "0x",2);
        count += 2;
        count += print_hex(paddr, 0);

        return (count);
}
