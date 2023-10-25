#include <stdio.h>
#include <math.h>

// Define the function f(x)
float f(float x) {
    return x * x * x - 5 * x - 7;
}

// Define the derivative of the function f(x)
float df(float x) {
    return 3 * x * x - 5;
}

int main() {
    int i, n;
    float a, b, x, x0, e;

    // Get user input for the number of iterations 'n'
    printf("Enter a suitable value of n: ");
    scanf("%d", &n);

    // Find an initial range [a, b] that brackets the root
    for (i = -n; i <= n; i++) {
        a = i;
        b = i + 1;
        if (f(a) * f(b) < 0)
            break;
    }

    // Calculate the initial guess 'x0' as the midpoint of the range [a, b]
    x0 = (a + b) / 2;
    printf("\nAn initial guess is %0.1f", x0);

    // Get user input for the tolerance 'e'
    printf("\nEnter the value of tolerance: ");
    scanf("%f", &e);

    // Perform root-finding using the Newton-Raphson method
    do {
        // Calculate the next approximation 'x' using the Newton-Raphson formula
        x = x0 - f(x0) / df(x0);
        x0 = x;

        // Continue the loop until the absolute value of f(x) is less than the tolerance 'e'
    } while (fabs(f(x)) >= e);

    // Display the approximate root value
    printf("\nThe value of a real root is %0.3f", x);

    return 0;
}
