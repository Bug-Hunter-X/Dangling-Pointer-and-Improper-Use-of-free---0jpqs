int main() {
  int x = 5;
  int *ptr = &x;
  *ptr = 10; 
  int y = *ptr; 
  printf("%d\n", y); // Output: 10

  free(ptr); //ERROR: free()ing a pointer that was not allocated by malloc()
}