# Program to display the Fibonacci sequence up to n-th term using recursive functions
recurse_fibonacci <- function(n) {
  if(n <= 1) {
    return(n)
  } else {
    return(recurse_fibonacci(n-1) + recurse_fibonacci(n-2))
  }
}
# take input from the user
n = as.integer(readline(prompt="How many terms? "))

# check if the number of terms is valid

  for(i in 0:(n-1)) {
    print(recurse_fibonacci(i))
  }


