#include <emscripten.h>
//EMSCRIPTEN_KEEPALIVE defined in emscripten.h used to simplify exporting the function
EMSCRIPTEN_KEEPALIVE int doubleIt(int arg) {
  return arg*2;
}
