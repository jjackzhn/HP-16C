EXENAME = main
OBJS = main.o stack.o arithops.o

CXX = g++
CXXFLAGS = -std=c++14 -c -Wall -Wextra
LD = g++
LDFLAGS = -std=c++14 -lc++abi

all: $(EXENAME)

$(EXENAME): $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o: main.cpp stack.h
	$(CXX) $(CXXFLAGS) main.cpp

stack.o: stack.cpp stack.h
	$(CXX) $(CXXFLAGS) stack.cpp

arithops.o: arithops.cpp arithops.h
	$(CXX) $(CXXFLAGS) arithops.cpp

clean:
	rm -f *.o $(EXENAME)
