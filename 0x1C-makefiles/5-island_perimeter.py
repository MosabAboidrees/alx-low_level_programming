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
    rows = len(grid) # Number of rows
    cols = len(grid[0]) # Number of columns
    edges = 0 # Number of edges
    size = 0 # Size of the island
    for rows_idx in range(rows):
        for cols_idx in range(cols):
            if grid[rows_idx][cols_idx] == 1: # Found land
                size += 1 # Increase the size of the island
                if rows_idx > 0 and grid[rows_idx-1][cols_idx] == 1: # Check up
                    edges -= 1 # Subtract 2 because we are counting twice
                if cols_idx > 0 and grid[rows_idx][cols_idx-1] == 1: # Check left
                    edges -= 1 # Subtract 2 because we are counting twice
    return (size * 4) - (edges * 2)

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
