#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum_arithmetic = 0.0, product_geometric = 1.0, sum_inverse_harmonic = 0.0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        double num;
        scanf("%lf", &num);

        // Arithmetic Mean
        sum_arithmetic += num;

        // Geometric Mean
        product_geometric *= num;

        // Harmonic Mean
        sum_inverse_harmonic += 1.0 / num;
    }

    // Calculate means
    double arithmetic_mean = sum_arithmetic / n;
    double geometric_mean = pow(product_geometric, 1.0 / n);
    double harmonic_mean = n / sum_inverse_harmonic;

    // Output the results
    printf("Arithmetic Mean: %lf\n", arithmetic_mean);
    printf("Geometric Mean: %lf\n", geometric_mean);
    printf("Harmonic Mean: %lf\n", harmonic_mean);

    return 0;
}
