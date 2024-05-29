#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""


def island_perimeter(grid):
	""" Calculate the perimeter of the island in the grid."""
	rows = len(grid)
	cols = len(grid[0])
	edges = 0
	size = 0

	for rows_idx in range(rows):
		for cols_idx in range(cols):
			if grid[rows_idx][cols_idx] == 1: # Found land
				size += 1 # Increase the size of the island
				if (cols_idx > 0 and grid[rows_idx][cols_idx-1] == 1):
					edges += 1 # Check left
				if (rows_idx > 0 and grid[rows_idx-1][cols_idx] == 1):
					edges += 1 # Check up
	# The formula is 4 * size - 2 * edges because we are counting twice
	return ((size * 4) - (edges * 2))
