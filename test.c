#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE int doubleIt(int arg) {
  return arg*2;
}
