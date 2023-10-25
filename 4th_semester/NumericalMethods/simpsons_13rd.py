def f(x):
    return x * x / (1 + x * x * x)

def main():
    a = float(input("Enter the lower limit, a: "))
    b = float(input("Enter the upper limit, b: "))
    n = int(input("Enter the number of sub-intervals, n: "))
    
    h = (b - a) / n
    integral_sum = f(a) + f(b)
    
    for i in range(1, n):
        if i % 2 == 0:
            integral_sum += 2 * f(a + i * h)
        else:
            integral_sum += 4 * f(a + i * h)
    
    integral_sum = (h * integral_sum) / 3
    print(f"The value of the integral is {integral_sum:.4f}")

if __name__ == "__main__":
    main()
