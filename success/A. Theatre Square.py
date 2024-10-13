m, n, a = map(int, input().split())

squares_m = (m + a - 1) // a
squares_n = (n + a - 1) // a

total_squares = squares_m * squares_n

print(total_squares)
