
# WebAssembly-Sample

Compiler setup
--------------

Set up the WebAssembly compiler (emscripten) using  https://webassembly.org/getting-started/developers-guide/


admin@admin-Virtual-Machine:~$

Environment setup after installation (non Windows 7 installs)
-------------------------------------------------------------

admin@admin-Virtual-Machine:~$ cd emsdk                 
admin@admin-Virtual-Machine:~/emsdk$ source ./emsdk_env.sh --build=Release

Setting environment variables:
EMSDK = /home/admin/emsdk

admin@admin-Virtual-Machine:~/emsdk$ cd ..
admin@admin-Virtual-Machine:~$ cd example
admin@admin-Virtual-Machine:~/example$ ls
test.c [take test.c from this repo]

Compile to WASM
---------------

admin@admin-Virtual-Machine:~/example$ emcc test.c -o test.js -s WASM=1 -s NO_EXIT_RUNTIME=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'

input: test.c
output: test.js, test.wasm

admin@admin-Virtual-Machine:~/example$ ls
test.c  test.js  test.wasm
admin@admin-Virtual-Machine:~/example$ gedit index.html [take index.html from this repo]


Refer https://developer.mozilla.org/en-US/docs/WebAssembly/C_to_wasm for after installation steps.

Just run index.html and see the result. [firefox, edge prefered to run locally. chrome cors prevents local file access]
