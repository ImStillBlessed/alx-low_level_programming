#!/usr/bin/python3
"""
This module prints the perimeter of an island
"""

def island_perimeter(grid):
    """
    this function calculates the perimeter if an island represented
    by '1' in a list in a list of '0's
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # check right
                if checker(grid, i, j + 1):
                    perimeter += 1
                # check left
                if checker(grid, i, j - 1):
                    perimeter += 1
                # check up
                if checker(grid, i + 1, j):
                    perimeter += 1
                # check down
                if checker(grid, i - 1, j):
                    perimeter += 1
    return perimeter


def checker(grid, i, j):
    """
    this is a helper function to validate the position we want to check"""
    if i < 0 or j < 0:
        return 1
    try:
        if grid[i][j] != 1:
            return 1
    except:
        return 1
    return 0