#include <stdio.h>

void draw(int n);

int main(int argc, char const *argv[])
{
    draw(5);
}

// função recursiva
void draw(int n) {
    if (n <= 0) {
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("# ");
    }
    printf("\n");

    draw(n - 1);
}
