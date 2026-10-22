#include <stdio.h>

void draw(int n);

int main(int argc, char const *argv[])
{
    draw(3);
}

// função recursiva
void draw(int n) {
    if (n <= 0) {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++) {
        printf("# ");
    }
    printf("\n");
}