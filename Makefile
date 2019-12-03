CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= llTests

COMMON_OBJECT_FILES = linkedListFuncs.o recLinkedListFuncs.o strFuncs.cpp tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./Tests 1
	./Tests 2
	./Tests 3
	./Tests 4

llTests: llTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
