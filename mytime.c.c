#include "mytime.h"
/* function that marks the current tempo ("tick" of the clock)
   It must be used to mark the beginning of the stretch that we want to measure in tempo */
timer tic() {
    timer tic_;
    gettimeofday(&tic_, NULL); // "marca" o tempo atual
    return tic_;
}

timer tac() {
    return tic();
}

/**
 * Compute the tempo between a tick tock;
 */

float comptime(timer tic, timer tac) {
  float t = ((tac.tv_sec  - tic.tv_sec) * 1000.0) +
            ((tac.tv_usec - tic.tv_usec) * 0.001);
  
  return t;
}
