#include <stdio.h>

#define print_line() printf("=========================================================================\n")

int main(void) {
  unsigned short rows_count, columns_count;
  int target_value;

  print_line();
  printf("Input rows count:");
  scanf("%hu", &rows_count);
  printf("Input columns count:");
  scanf("%hu", &columns_count);
  print_line();

  if (rows_count <= 0 || columns_count <= 0) {
    printf("Sizes cannot be less then or equal 0");
    return 0;
  }

  int matrix[rows_count][columns_count];

  printf("Input elements of matrix:\n");
  print_line();

  for (unsigned short row = 0; row < rows_count; row++) {
    for (unsigned short column = 0; column < columns_count; column++) {
      printf("Input element (%hu; %hu):", row + 1, column + 1);
      scanf("%d", &matrix[row][column]);
    }
    print_line();
  }

  printf("Input target value:");
  scanf("%d", &target_value);

  printf("Start search...\n");
  print_line();

  for (unsigned short column = 0; column < columns_count; column++) {
    for (unsigned short row = 0; row < rows_count; row++) {
      if (matrix[row][column] == target_value) {
        printf("(%d; %d)\n", row + 1, column + 1);
      }
    }
  }

  print_line();
  printf("Done\n");

  return 0;
}