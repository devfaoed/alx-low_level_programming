#!/usr/bin/python3
"""This module calculates the perimeter of an island"""


def get_water_zone_count(grid, i, j):
    """Checks water zone positions to get borders"""
    count = 0
    if i <= 0 or not grid[i - 1][j]:
        count += 1
    if j <= 0 or not grid[i][j - 1]:
        count += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        count += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        count += 1
    return count


def island_perimeter(grid):
    """Iterates through island to get water zones(1s)"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += get_water_zone_count(grid, i, j)
    return perimeter
