#This makefile was tested on a OSX 11.2.3
#Apple clang version 12.0.0 (clang-1200.0.32.29)
#GNU Make 3.81
src = address.cpp client.cpp client-test.cpp

client-test-1st:
	g++ $(src) -o client-test -std=c++17 -Wall -Wextra -Werror -Wshadow -Wconversion -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs  -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wsign-promo  -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused
client-test: clean-client-test
	g++ $(src) -o client-test -std=c++17 -std=c++17 -Wall -Wextra -Werror -Wshadow -Wconversion -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self  -Wmissing-declarations -Wmissing-include-dirs  -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wsign-promo  -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused
debug-client-test: clean-client-test
        g++ -g $(src) -o client-test -std=c++17 -Wall -Wextra -Werror -Wshadow -Wconversion -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self  -Wmissing-declarations -Wmissing-include-dirs  -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wsign-promo  -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused
run-client-test: client-test
	./client-test
clean-client-test:
ifeq ($(client-test),"")
	rm client-test
endif
ifeq ($(client-test-output.txt),"")
	rm client-test-output.txt
endif
test-client-test: client-test
	./client-test > client-test-output.txt
	diff client-test-correct.txt client-test-output.txt

