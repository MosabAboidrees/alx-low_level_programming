#!/usr/bin/python3
'''Module to calculate the perimeter of an island in a grid.'''

def island_perimeter(grid):
	'''Returns the perimeter of the island described in grid.'''
	perimeter = 0

	for row_idx, row in enumerate(grid):
		for col_idx, cell in enumerate(row):
			if cell == 1:
				# Check all four sides of the cell
				if col_idx == 0 or row[col_idx - 1] == 0:  # Check left side
					perimeter += 1
				if col_idx == len(row) - 1 or row[col_idx + 1] == 0:  # Check right side
					perimeter += 1
				if row_idx == 0 or grid[row_idx - 1][col_idx] == 0:  # Check top side
					perimeter += 1
				if row_idx == len(grid) - 1 or grid[row_idx + 1][col_idx] == 0:  # Check bottom side
					perimeter += 1

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
