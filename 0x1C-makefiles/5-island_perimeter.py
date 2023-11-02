#!/usr/bin/python3
""" module comment """


def island_perimeter(grid):
    """ return perimeter of one's in a matrix """
    cont = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                cont += 4
                if i > 0 and grid[i - 1][j] == 1:
                    cont -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    cont -= 2
    return cont
