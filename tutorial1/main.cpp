#include <iostream>
#include <omp.h>

using namespace std;

int main() {
#pragma omp parallel
  {
    int ID = omp_get_thread_num();
    printf("hello  %d\n", ID);
    printf("hello again %d\n", ID);
  }
  // Runs in all cpu threads the same block of code. The number of threads can
  // be found running "nproc" in terminal Output: hello  1 hello again 1 hello 6

  // Output:
  // hello again 6
  // hello  5
  // hello again 5
  // hello  7
  // hello again 7
  // hello  4
  // hello again 4
  // hello  2
  // hello again 2
  // hello  0
  // hello again 0
  // hello  3
  // hello again 3
  return 0;
}