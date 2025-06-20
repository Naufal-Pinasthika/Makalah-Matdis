#include <stdio.h>

int main() {
    int Level;
    printf("Input level: ");
    scanf("%d", &Level);
    
    double x = ((Level + 81) - 92) * 0.02;
    if (x < 0) {
        x = 0;
    }

    double cost = ((x + 0.1) * (Level + 81) * (Level + 81)) + 1;
    long long runeCost = (long long)cost;

    printf("Runes needed: %lld\n", runeCost);
    return 0;
}
