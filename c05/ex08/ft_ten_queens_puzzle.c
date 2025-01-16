#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

// Function to check if placing a queen at (row, col) is valid
bool is_safe(int board[SIZE], int col, int row) {
    for (int prev_col = 0; prev_col < col; ++prev_col) {
        int prev_row = board[prev_col];
        if (prev_row == row ||
            prev_row - prev_col == row - col ||
            prev_row + prev_col == row + col) {
            return false;
        }
    }
    return true;
}

// Recursive function to find and display all solutions
void solve(int board[SIZE], int col, int *solution_count) {
    if (col == SIZE) {
        // Print the solution
        for (int i = 0; i < SIZE; ++i) {
            printf("%d", board[i]);
        }
        printf("$\n");
        (*solution_count)++;
        return;
    }

    for (int row = 0; row < SIZE; ++row) {
        if (is_safe(board, col, row)) {
            board[col] = row;
            solve(board, col + 1, solution_count);
        }
    }
}

// Function to find all ten-queen arrangements
int ft_ten_queens_puzzle(void) {
    int board[SIZE]; // Array to store the row positions of queens
    int solution_count = 0;
    solve(board, 0, &solution_count);
    return solution_count;
}

int main(void) {
    int total_solutions = ft_ten_queens_puzzle();
    printf("Total solutions: %d\n", total_solutions);
    return 0;
}

