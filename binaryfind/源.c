//#include <stdio.h>
//
//void square_print(unsigned int n)
//{
//    for (int i = n; i > 0; i--) {
//        for (int j = n; j > 0; j--) {
//            if (j % 2 != 0)
//                printf("#");
//            if (j % 2 == 0)
//                printf("*");
//            if (j == 1)
//                printf("\n");
//
//        }
//    }
//}
//
//
//int gcd(int a, int b)
//{
//    if (b == 0)
//        return a;
//    gcd(b, a % b);
//}
//int main()
//{
//    int c=gcd(4, 16);
//    printf("%d", c);
//	return 0;
//}
#include <stdio.h>


int main()
{
    int a = 0;
    int count = 0;
    scanf_s("%d", &a);
    for (int i = a; i <= a + 3; i++)
    {
        for (int j = a; j <= a + 3; j++)
        {
            for (int k=a; k <= a + 3; k++)
            {
                if(i!=j)
                    if(j!=k)
                        if (k != i)
                        {
                            printf("%d%d%d", i, j, k);
                            count++;
                            if (count == 6) {
                                printf("\n");
                                count = 0;
                            }
                            else printf(" ");
                        }
            }
        }
    }

    return 0;
}