#include <stdio.h>

int main() {
  int elapsed_time, hours, minutes, seconds;

  
  printf("Enter the total time elapsed (in seconds): ");
  scanf("%d", &elapsed_time);

  hours = elapsed_time / 3600;
  minutes = (elapsed_time % 3600) / 60;
  seconds = elapsed_time % 60;

  printf("The time is %d:%d:%d\n", hours, minutes, seconds);

  return 0;
}