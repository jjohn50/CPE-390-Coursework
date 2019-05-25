CXX	:= g++ -std=c++11 -g -O2 # debugging and optimization on

all: hw5

# See main for the deatils of computing power
hw5:  main.o power.o
	$(CXX) main.o power.o -o hw5

power.o: power.s
	$(CXX) -c power.s -o power.o
clean:
	rm *.o *.exe hw5