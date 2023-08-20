typedef struct special
{
	char *op;
	void (*f)(int a);
} specials;

void _printf(const char *format, ...);
int (*get_special(char *s));
void op_int(int a);
void paste(char a);
