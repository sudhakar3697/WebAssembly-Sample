
# WebAssembly-Sample

Compiler setup
--------------
[I am using ubuntu (prefered) for compiling]

Set up the WebAssembly compiler (emscripten) using  https://webassembly.org/getting-started/developers-guide/

<pre>
$ git clone https://github.com/juj/emsdk.git
$ cd emsdk
$ ./emsdk install --build=Release sdk-incoming-64bit binaryen-master-64bit
$ ./emsdk activate --build=Release sdk-incoming-64bit binaryen-master-64bit
</pre>

start the terminal

Environment setup after installation (non Windows 7 installs)
-------------------------------------------------------------
<pre>
admin@admin-Virtual-Machine:~/$ cd emsdk                 
admin@admin-Virtual-Machine:~/emsdk$ source ./emsdk_env.sh --build=Release

Setting environment variables:
EMSDK = /home/admin/emsdk

admin@admin-Virtual-Machine:~/emsdk$ cd ..
admin@admin-Virtual-Machine:~/emsdk$ mkdir example
admin@admin-Virtual-Machine:~/$ cd example [this directory has the c/c++ code to be compiled into WebAssembly]
admin@admin-Virtual-Machine:~/example$ gedit test.c [take test.c from this repo]
admin@admin-Virtual-Machine:~/example$ ls
test.c
</pre>

Compile to WASM
---------------
<pre>

admin@admin-Virtual-Machine:~/example$ emcc test.c -o test.js -s WASM=1 -s NO_EXIT_RUNTIME=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'

</pre>
<b>input</b>: test.c

<b>output</b>: test.js, test.wasm

<pre>admin@admin-Virtual-Machine:~/example$ ls

test.c 
test.js [generated]
test.wasm [generated]

Using WASM files in Javascript
-------------------------------

admin@admin-Virtual-Machine:~/example$ gedit index.html [take index.html from this repo]

</pre>

Refer https://developer.mozilla.org/en-US/docs/WebAssembly/C_to_wasm for after installation steps.

Just run <b>index.html</b> and see the result. [firefox, edge prefered to run locally. chrome CORS prevents local system file access]
