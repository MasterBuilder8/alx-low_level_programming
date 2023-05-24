#!/usr/bin/python3
"""Defines an island perimeter measuring function"""


def island_perimeter(grid):
    """returns the perimeter of the island"""

    width = len(grid[0])
    height = len(grid)
    edges = 0
    sizes = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1:
                    if (j > 0 grid[i][j - 1] == 1):
                        edges += 1
                    if (i > 0 grid[i - 1][j] == 1):
                        edges += 1
    return size * 4 - edges * 2
