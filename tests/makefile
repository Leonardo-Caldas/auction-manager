#This makefile was tested on a OSX 11.2.3
#Apple clang version 12.0.0 (clang-1200.0.32.29)
#GNU Make 3.81
path_ = /Users/leleo/Documents/prog-3/auction-manager-local/auction-manager/

src = $(path_)src/address.cpp $(path_)src/register.cpp $(path_)src/account.cpp $(path_)src/buyer_register.cpp buyer_register_test.cpp

tags = -std=c++17 -Wall -Wextra -Werror -Wshadow -Wconversion -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-include-dirs  -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wsign-conversion -Wsign-promo  -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused

test-1st:
	g++ $(src) -o test -I$(path_)headers $(tags)
test: clean-test
	g++ $(src) -o test -I$(path_)headers $(tags)
debug-test: clean-test
	g++ -g $(src) -o test $(tags) -g
run-test: test
	./test
clean-test:
ifeq ($(test),"")
	rm test
endif
ifeq ($(test-output.txt),"")
	rm test-output.txt
endif
test-test: test
	./test > test-output.txt
	diff brt.txt test-output.txt > diff-resuts.txt

