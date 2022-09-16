#!/usr/bin/python3
"""island perimeter problem"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    """grid is a 2D array where 0 represents a water zone"""
    """and 1 represents a land zone"""
    perimeter = 0
    if (grid == None or len(grid)) == 0:
        return
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if (i > 0 and grid[i - 1][j]) == 1:
                    perimeter -= 2
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
    return perimeter
