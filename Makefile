output: main.o labQueue.o palindrome.o menuMaker.o inputCheck.o
	g++ main.o labQueue.o palindrome.o menuMaker.o inputCheck.o -std=c++11 -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

labQueue.o: labQueue.cpp labQueue.hpp
	g++ -std=c++11 -c labQueue.cpp

palindrome.o: palindrome.cpp palindrome.hpp
	g++ -std=c++11 -c palindrome.cpp

menuMaker.o: menuMaker.cpp menuMaker.hpp
	g++ -std=c++11 -c menuMaker.cpp

inputCheck.o: inputCheck.cpp inputCheck.hpp
	g++ -std=c++11 -c inputCheck.cpp

clean:
	rm *.o output