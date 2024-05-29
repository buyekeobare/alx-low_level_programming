#!/usr/bin/python3
"""This is a script that calculates the perimeter of an island in a grid."""


def num_water_neighbours(grid, i, n):
    """Returns the number of water neighbours a cell has in a grid."""

    num = 0

    if i <= 0 or not grid[i - 1][n]:
        num += 1
    if n <= 0 or not grid[i][n - 1]:
        num += 1
    if n >= len(grid[i]) - 1 or not grid[i][n + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][n]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for i in range(len(grid)):
        for n in range(len(grid[i])):
            if grid[i][n]:
                perimeter += num_water_neighbours(grid, i, n)

    return perimeter
