#!/usr/bin/python3
"""
Island Perimeter
"""

def island_perimeter(grid):
    """
    This function returns the perimeter of the island described in grid
    """
    perimeter = 0
    if len(grid):
        # expanding the grid
        for lst in grid:
            lst.append(0)
        grid.append([0] * len(grid[0]))

        length = 1
        shape = 0
        start = 0
        perimeter = 0
        base = (0, 0)

        for lst in grid:
            try:
                start = lst.index(1)
                width = lst.count(1)
            except ValueError:
                start = 0
                width = 0
            if shape and width:
                if base != (start, width):
                    perimeter += 2 * (base[1] + length)
                    perimeter -= 2 * (intersection((start, width), base))
                    base = (start,width)
                    length = 1
                else:
                    length += 1
            elif width and not shape:
                base = (start, width)
                shape = 1
            elif not width and shape:
                perimeter += 2 * (base[1] + length)
                break

    return perimeter

def intersection(a, b):
    """This function calculates the amount of intersection between
    two shapes.
    """
    st = max(a[0], b[0])
    ed = min(a[0] + a[1] - 1, b[0] + b[1] - 1)
    if st <= ed:
        return (ed - st + 1)
    else:
        return 0
