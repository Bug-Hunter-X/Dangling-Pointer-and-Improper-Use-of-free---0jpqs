int main() {
  int *ptr = (int *)malloc(sizeof(int));
  if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1; // Handle allocation failure
  }
  *ptr = 10;
  int y = *ptr; 
  printf("%d\n", y); // Output: 10

  free(ptr); // Now it's safe to free() because it was allocated by malloc()
  ptr = NULL; // Good practice: Set the pointer to NULL after freeing
}