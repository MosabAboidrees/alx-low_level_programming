#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
	"""
	Calculate the perimeter of the island described in grid.
	Args:
		grid (list of list of int): The grid representation of the island.
	Returns:
		int: The perimeter of the island.
	"""
	rows = len(grid)
	cols = len(grid[0])
	perimeter = 0

	for i in range(rows):
		for j in range(cols):
			if grid[i][j] == 1:
				perimeter += 4

				if i > 0 and grid[i-1][j] == 1:
					perimeter -= 2
				if j > 0 and grid[i][j-1] == 1:
					perimeter -= 2

	return perimeter

if __name__ == "__main__":
	grid = [
		[0, 0, 0, 0, 0, 0],
		[0, 1, 0, 0, 0, 0],
		[0, 1, 0, 0, 0, 0],
		[0, 1, 1, 1, 0, 0],
		[0, 0, 0, 0, 0, 0]
	]
	print(island_perimeter(grid))
