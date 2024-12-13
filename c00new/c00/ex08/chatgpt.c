#include <unistd.h>
#include <stdio.h>

int	main()
{
    int arr[10]; // Array to hold the current combination
    int size = 2; // Size of combinations to generate
    generate(arr, size, 0, 0); // Start generating combinations
    write(1, "\n", 1); // Add a newline after the last combination
    return 0;
}
void	print_combination(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        char digit = arr[i] + '0';
        write(1, &digit, 1);
    }
    write(1, ", ", 2); // Add a comma and space after each combination
}

void generate(int arr[], int size, int start_digit, int depth) {
    // If the combination is complete, print it
    if (depth == size) {
        print_combination(arr, size);
		return;
    }

    // Generate combinations by placing digits from start_digit to 9
    for (int digit = start_digit; digit <= 10 - (size - depth); digit++) {
        arr[depth] = digit;
//		printf("app[%d] est %d\n", depth, arr[depth]);            // Set the current position
//		printf("hahai\n");
        generate(arr, size, digit + 1, depth + 1); // Recurse to the next depth
    }
}


