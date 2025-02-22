#include <stdio.h>
struct Distance {
    int feet;
    float inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12.0) {
        result.feet += (int)(result.inches / 12);
        result.inches = (int)result.inches % 12 + (result.inches - (int)result.inches);
    }
    return result;
}
int main() {
    struct Distance d1, d2, result;
    printf("Enter first distance (feet inches): ");
    scanf("%d %f", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): ");
    scanf("%d %f", &d2.feet, &d2.inches);
    result = addDistances(d1, d2);
    printf("Sum of distances: %d feet %.2f inches\n", result.feet, result.inches);
    return 0;
}
