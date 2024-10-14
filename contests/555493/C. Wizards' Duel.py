# Approach
# 1- We need to calculate the distance in which the two spells will meet 
# 2- Second meeting is the same as the first meeting 😂

l = int(input())
p = int(input())
q = int(input())

p_ns = p / 2
q_ns = q / 2

single_unit = l / (p_ns + q_ns)

print(p_ns * single_unit)