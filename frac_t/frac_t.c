#include <stdio.h>

typedef struct {
	int fz;
	int fm;
}frac_t;
frac_t sum;
frac_t frac_add(frac_t x, frac_t y)
{
	
	sum.fm = x.fm * y.fm;
	sum.fz = x.fz * y.fm + x.fm * y.fz;
	int mg = gdb(sum.fm, sum.fz);
	sum.fm = sum.fm / mg;
	sum.fz = sum.fz / mg;
	return sum;
}

int gdb(int a, int b)
{
	while (b != 0) {
		int temp;
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	frac_t a = {1,3};
	frac_t b = {2,3};
	scanf_s("%d/%d", &a.fz, &a.fm);
	scanf_s("%d/%d", &b.fz, &b.fm);
	frac_add(a,b);
	printf("%d/%d", sum.fz, sum.fm);
	return 0;
}