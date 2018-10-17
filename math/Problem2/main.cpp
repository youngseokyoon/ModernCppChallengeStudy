#include <gsl/gsl>

using namespace std;
int main(int argc, char* argv[])
{
    int32_t n1 = atoi(argv[1]);
    int32_t n2 = atoi(argv[2]);

    int32_t commonDivisor = 0;
    for (int32_t i = 1; i <= n2; i++) {
        if ((n1 % i == 0) && (n2 % i == 0)) {
            commonDivisor = i;
        }
    }

    printf("%d %d, %d\n", n1 ,n2, commonDivisor);
    return 0;
}
