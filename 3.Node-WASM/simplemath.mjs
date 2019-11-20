// node --experimental-modules --experimental-wasm-modules simplemath.mjs

import {square} from "./square.wasm";

console.log(square(25));