x='core' # DEFAULT

prep: clean;
	mkdir -p build
	cd build && cmake ..

all: prep;
	cd build && make

tests: prep;

rebuild:
	cd build && make


clean:
		rm -r -f ./build
		rm -f vgcore.*

run:
	./build/$(x)

run-debug:
	valgrind ./build/$(x)

run-debug-full:
	valgrind --leak-check=full ./build/$(x)
