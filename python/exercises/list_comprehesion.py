items = [1, 2, 3, 4, 5]

origin_and_pow = list([list([item, item ** 2]) for item in items])

sums = list([item[0] + item[1] for item in origin_and_pow])

divided_by_3 = list([item for item in sums if item % 3 == 0])

print(f"items: {items}")
print(f"origin_and_pow: {origin_and_pow}")
print(f"sums: {sums}")
print(f"divided_by_3: {divided_by_3}")