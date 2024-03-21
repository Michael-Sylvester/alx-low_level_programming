def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by [j][i] = 0 and land by [j][i] = 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """

    width = len(grid[0])
    height = len(grid)
    perimeter = 0
    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == len(grid[row]) - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
    return (perimeter)
