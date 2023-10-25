import math

# Define the function f(x)
def f(x):
    return x ** 3 - 3 * x - 5

def main():
    # Initialize variables
    a, b, x, e = 0, 0, 0, 0

    # Get user input for the number of iterations 'n'
    n = int(input("Enter a suitable value of n: "))

    # Find an initial range [a, b] that brackets the root
    for i in range(-n, n + 1):
        a = i
        b = i + 1
        if f(a) * f(b) < 0:
            break

    # Display the initial range [a, b]
    print(f"A real root lies between {a:.1f} and {b:.1f}")

    # Get user input for the tolerance 'e'
    e = float(input("Enter the value of tolerance: "))

    # Perform root-finding using the Secant method
    while True:
        # Calculate the next approximation 'x' using the Secant method
        x = (a * f(b) - b * f(a)) / (f(b) - f(a)

        # Update the range [a, b] based on the function values at 'a' and 'x'
        if f(a) * f(x) < 0:
            b = x
        else:
            a = x

        # Continue the loop until the absolute value of f(x) is less than the tolerance 'e'
        if abs(f(x)) < e:
            break

    # Display the approximate root value
    print(f"The value of a real root is {x:.3f}")

if __name__ == "__main__":
    main()
