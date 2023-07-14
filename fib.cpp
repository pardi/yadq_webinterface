#include <emscripten/bind.h>

using namespace emscripten;

int fib(int n) {
	if(n <= 1)
		return n;
	else
		return fib(n-1) + fib(n-2);
}

EMSCRIPTEN_BINDINGS(my_fib) {
	function("fib", &fib);
}
