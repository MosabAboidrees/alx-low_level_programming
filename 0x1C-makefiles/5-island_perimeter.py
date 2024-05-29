#!/usr/bin/python3
'''Module to calculate the perimeter of an island in a grid.'''

def island_perimeter(grid):
	'''Returns the perimeter of the island described in grid.'''
	perimeter = 0
	last_fc_idx = []  # last list found cells indexes
	current_fc_idx = [] # current list found cells indexes

	for row_idx, row in enumerate(grid):
		for col_idx, cell in enumerate(row):
			if cell == 1:
				# Check all four sides of the cell
				current_fc_idx.append(col_idx) # Add the index of the cell
				if col_idx == 0 or row[col_idx - 1] == 0: # Check left side
					perimeter += 1
				if col_idx == len(row) - 1 or row[col_idx + 1] == 0: # Check right side
					perimeter += 1
				if col_idx not in last_fc_idx: # Check top side
					perimeter += 1
				if row_idx + 1 < len(grid): # Check if the cell is in the last row
					if grid[row_idx + 1][col_idx] != 1: # Check bottom side
						perimeter += 1
				else:
					perimeter += 1 # Add bottom side of the cell
		last_fc_idx = current_fc_idx.copy() # Update the last found cells
		current_fc_idx = [] # Reset the current found cells

	return perimeter

if __name__ == "__main__": # Run the test cases
	grid = [
		[0, 0, 0, 0, 0, 0],
		[0, 1, 0, 0, 0, 0],
		[0, 1, 0, 0, 0, 0],
		[0, 1, 1, 1, 0, 0],
		[0, 0, 0, 0, 0, 0]
	]
	print(island_perimeter(grid))
