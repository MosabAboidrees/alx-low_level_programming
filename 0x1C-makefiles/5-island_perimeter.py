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
    rows = len(grid)  # Number of rows
    cols = len(grid[0])  # Number of columns
    perimeter = 0  # Initialize perimeter

    for row_idx in range(rows):
        for col_idx in range(cols):
            if grid[row_idx][col_idx] == 1:  # Found land
                perimeter += 4  # Add 4 for each land cell
                if row_idx > 0 and grid[row_idx - 1][col_idx] == 1:  # Check up
                    perimeter -= 2  # Subtract 2 for the shared edge with the upper cell
                if col_idx > 0 and grid[row_idx][col_idx - 1] == 1:  # Check left
                    perimeter -= 2  # Subtract 2 for the shared edge with the left cell

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
