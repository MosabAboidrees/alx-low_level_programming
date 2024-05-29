#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a grid."""


def island_perimeter(grid):
	"""
	Calculate the perimeter of the island described in grid.
	Args:
		grid (list of list of int): The grid representation of the island.
	Returns:
		int: The perimeter of the island.
	"""
	height = len(grid)  # Number of rows
	width = len(grid[0])  # Number of columns
	island_size = 0  # Count of land cells
	shared_edges = 0  # Count of shared edges between land cells

	for row in range(height):
		for col in range(width):
			if grid[row][col] == 1:  # Found land
				island_size += 1  # Increase the island size
				# Check if the left neighbor is also land
				if col > 0 and grid[row][col - 1] == 1:
					shared_edges += 1
				# Check if the top neighbor is also land
				if row > 0 and grid[row - 1][col] == 1:
					shared_edges += 1

	# Each land cell has 4 sides, subtract twice the shared edges count
	return (island_size * 4) - (shared_edges * 2)
