/*

Author Info
===================
Nilanjan B. Mitra
2023IMG-039
ABV-IIITM

*/

#include <stdio.h>

typedef char* string;
const char winCases[] = {'_', 'X', 'O'};

void ticTacToe(void);
void printGrid(int moves[][2], int gridSize, string message);
int invalidInput(int moves[][2], int indexFilled, int gridSize, int row, int col);
int determineWinner(int moves[][2], int movesSize, int gridSize, int indexFilled);

void ticTacToe() 
{
    int gridSize = 0;
    do
    {
        printf("\nAvailable options:\n");
        printf("1. 3x3\n");
        printf("2. 4x4\n");
        printf("3. 5x5\n");
        printf("4. Go back\n");
        printf("Choose an option: ");
        scanf("%d", &gridSize);
    } while (!(gridSize > 0 && gridSize < 5));

    // Exit condition
    if (gridSize == 4) { return; }
    
    // Transform the option number into the actual value for size of required grid
    gridSize += 2;

    // Value Map for the 2D array moves
    // moves keeps track of the moves by each player sequentially
    // Player X always goes first and O always goes second

    // Each element [r, c] of moves keeps track of the element filled by the player X/O (depending on whose turn it is)
    // For eg, if moves[2] = [1, 2] it means that element at [1, 2] is X
    int movesSize = gridSize * gridSize;
    int moves[movesSize][2];
    
    // Initialising moves
    // Negative values denote an empty grid
    for (int i = 0; i < movesSize; i++)
    {
        moves[i][0] = -1;
        moves[i][1] = -1;
    }

    printGrid(moves, gridSize, "The grid will be printed after each player's turn\nInitial grid:");

    for (int i = 0; i < movesSize; i++)
    {
        printf("\n");
        if (i % 2 == 0) { printf("Player X's turn\n"); }
        else { printf("Player O's turn\n"); }

        int col, row;

        // Input sanitisation is done here
        // Addresses which have already been filled or are out of bounds are invalid
        do
        {
            printf("Enter space separated values for row and column respectively: ");
            scanf("%d %d", &row, &col);
        } while (invalidInput(moves, i + 1, gridSize, row, col));
        
        moves[i][0] = row - 1;
        moves[i][1] = col - 1;
        printGrid(moves, gridSize, "Grid:");

        // 0 --> No winner can be determined / Pending
        // 1 --> X wins
        // 2 --> O wins
        // 3 --> Draw
        int winner = determineWinner(moves, movesSize, gridSize, i);
        if (winner)
        {
            if (winner == 3) { printf("Draw!"); }
            else { printf("%c wins\n", winCases[winner]); }
            
            break;
        }
    }

    return;
}


void printGrid(int moves[][2], int gridSize, string message)
{
    printf("\n%s\n", message);

    // Initialising the grid
    char grid[gridSize][gridSize];
    for (int i = 0; i < gridSize ; i++)
    {
        for (int j = 0; j < gridSize; j++)
        {
            grid[i][j] = '_';
        }   
    }

    // Determining grid from moves history
    for (int i = 0; i < gridSize * gridSize; i++)
    {
        int x = moves[i][0];
        int y = moves[i][1];

        if (x == -1 && y == -1)
        {
            continue;
        }
        else
        {
            if (i % 2 == 0) { grid[x][y] = 'X'; }
            else { grid[x][y] = 'O'; }
        }
    }

    // Print the grid
    for (int i = 0; i < gridSize ; i++)
    {
        printf("%6d", i + 1);
    }
    printf("\n");
    for (int i = 0; i < gridSize ; i++)
    {
        printf("%d |", i + 1);
        for (int j = 0; j < gridSize; j++)
        {
            printf("%4c ", grid[i][j]);
        }   
        printf("|\n");
    }
}

// Input is invalid if the address has already been filled or is out of bounds
int invalidInput(int moves[][2], int indexFilled, int gridSize, int row, int col)
{
    for (int i = 0; i < indexFilled; i++)
    {
        if (row > gridSize || col > gridSize || moves[i][0] == row - 1 && moves[i][1] == col - 1)
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }
    return 0;
}

int determineWinner(int moves[][2], int movesSize, int gridSize, int indexFilled)
{
    // Generate grid from moves
    // Initialising the grid
    char grid[gridSize][gridSize];
    for (int i = 0; i < gridSize ; i++)
    {
        for (int j = 0; j < gridSize; j++)
        {
            grid[i][j] = '_';
        }   
    }

    // Grid generation
    for (int i = 0; i < indexFilled; i++)
    {
        int x = moves[i][0];
        int y = moves[i][1];

        if (x == -1 && y == -1)
        {
            continue;
        }
        else
        {
            if (i % 2 == 0) { grid[x][y] = 'X'; }
            else { grid[x][y] = 'O'; }
        }
    }

    // For checking winnerX
    int winner = 0;

    // Check columns
    for (int i = 0; i < gridSize; i++)
    {   
        switch (grid[i][0])
        {
            case 'X':
                winner = 1;
                break;

            case 'O':
                winner = 2;
                break;

            default:
                // Corresponds to '_' i.e. empty cell
                winner = 0;
                break;
        }

        for (int j = 0; j < gridSize; j++)
        {
            if (grid[i][j] != winCases[winner]) { break; }
            if (j == gridSize - 1) { return winner; }
        }
    }

    // Check rows
    for (int i = 0; i < gridSize; i++)
    {   
        switch (grid[0][i])
        {
            case 'X':
                winner = 1;
                break;

            case 'O':
                winner = 2;
                break;

            default:
                // Corresponds to '_' i.e. empty cell
                winner = 0;
                break;
        }

        for (int j = 0; j < gridSize; j++)
        {
            if (grid[j][i] != winCases[winner]) { break; }
            if (j == gridSize - 1) { return winner; }
        }
    }

    // Check diagonal
    for (int i = 0; i < gridSize; i++)
    {
        switch (grid[i][i])
        {
            case 'X':
                winner = 1;
                break;

            case 'O':
                winner = 2;
                break;

            default:
                // Corresponds to '_' i.e. empty cell
                winner = 0;
                break;
        }
        for (int j = 0; j < gridSize; j++)
        {
            if (i == j)
            {
                if (grid[j][j] != winCases[winner]) { break; }
                else if (j == gridSize - 1) { return winner; }
            }
        }
    }

    // Check anti-diagonal
    for (int i = 0; i < gridSize; i++)
    {
        switch (grid[i][i])
        {
            case 'X':
                winner = 1;
                break;

            case 'O':
                winner = 2;
                break;

            default:
                // Corresponds to '_' i.e. empty cell
                winner = 0;
                break;
        }
        for (int j = 0; j < gridSize; j++)
        {
            if (i + j == gridSize - 1)
            {
                if (grid[j][(gridSize - 1) - j] != winCases[winner]) { break; }
                else if (j == gridSize - 1) { return winner; }
            }
        }
    }

    // Handling draw and pending cases
    if (indexFilled == (gridSize * gridSize) - 1) { return 3; }
    else { return 0; }
}