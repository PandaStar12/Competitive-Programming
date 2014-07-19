#include <cstdio>

int sum=0;
int main() {
   int i,j;
   int ld1x, ld1y, pg1x, pg1y;
   int ld2x, ld2y, pg2x, pg2y;
   int uklad[700][700];

 scanf("%d %d %d %d", &ld1x, &ld1y, &pg1x, &pg1y);
 scanf("%d %d %d %d", &ld2x, &ld2y, &pg2x, &pg2y);

   for (i = ld1x; i < pg1x; ++i) {
       for (j = ld1y; j < pg1y; ++j)
            uklad[i][j]++;
   }

   for (i = ld2x; i < pg2x; ++i) {
       for (j = ld2y; j < pg2y; ++j)
            uklad[i][j]++;
   }

   for (i = 0; i < 600; ++i) {
       for (j = 0; j < 600; ++j)
           if (uklad[i][j] == 2)
                sum += uklad[i][j]-1;
           else if (uklad[i][j] == 1)
                sum += uklad[i][j];
   }

	printf("%d\n", sum);

    return 0;
}
