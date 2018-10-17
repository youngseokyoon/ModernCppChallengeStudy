#include <gsl/gsl>

using namespace std;
int main(int argc, char* argv[])
{
    uint32_t limit = atoi(argv[1]);
    uint64_t sum = 0U;
    for (int32_t index = 0U; index <= limit; index++) {
        if ((index % 3U == 0U) || (index % 5U == 0U)) {
            sum += index;
        }
    }

    printf("%lu\n", sum);

    return 0;
}
