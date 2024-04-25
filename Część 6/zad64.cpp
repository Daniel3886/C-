#include <stdio.h>
#include <stdbool.h>
#include <cstdlib>

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void find_twin_primes(int max) {
    printf("Znalezione pary liczb bliŸniaczych:\n");
    for (int i = 2; i <= max - 2; i++) {
        if (is_prime(i) && is_prime(i + 2))
            printf("%d %d\n", i, i + 2);
    }
}

int main() {
	system("chcp 1250");
    int max;
    printf("Podaj górn¹ granicê sprawdzanego przedzia³u: ");
    scanf("%d", &max);
    find_twin_primes(max);
    return 0;
}

