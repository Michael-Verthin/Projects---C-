#include <stdbool.h>
#include <stdio.h>

/*
  if boolean 'value' is TRUE  => return string "Yes" 
  if boolean 'value' is FALSE => return string "No"
*/
const char *bool_to_string(bool value) {
  return value ? "Yes" : "No";
}

int main() {
  bool test_value_true = true;
  bool test_value_false = false;
  const char *result_true = bool_to_string(test_value_true);
  printf("When the value is true: %s\n", result_true);
  const char *result_false = bool_to_string(test_value_false);
  printf("When the value is false: %s\n", result_false);
  return 0;
}
