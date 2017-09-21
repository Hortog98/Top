all: prog test

prog:			mkDir main.o functions.o

				g++ build/main.o build/functions.o -o bin/Prog


main.o:			src/main.cpp

				g++ -I thirdparty -Wall -Werror -c src/main.cpp -o build/main.o


functions.o:	src/functions.cpp

				g++ -I thirdparty -Wall -Werror -c src/functions.cpp -o build/functions.o	


test:			mkDir main_test.o modul_test.o result_test.o

				gcc build/modul_test.o build/main.o build/result_test.o  -o bin/Tests


main_test.o:	tests/main.c
		
				gcc -I thirdparty -I src -c tests/main.c -o build/main.o


modul_test.o:	tests/modul_test.c

				gcc -I library -I main -c tests/modul_test.c -o build/modul_test.o

result_test.o:	tests/result_test.c

				gcc -I library -I main -c tests/result_test.c -o build/result_test.o

mkDir:			bin build


bin:			
				test ! -d bin && mkdir bin


build:
				test ! -d build && mkdir build


.PHONY:			clean


clean:
				rm -r bin
				rm -r build


run:
				./bin/Prog


runtest:
				./bin/Tests
