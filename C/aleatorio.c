#include <stdio.h>
#include <stdlib.h>

main() {
const int N = 500000;
int num;
while (1) {
num = ((rand() << 15) | rand()) % N;
if ( num > 500000-100) {
printf("%d\n",num);
}

}
}
