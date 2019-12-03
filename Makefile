CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= tests

COMMON_OBJECT_FILES = linkedListFuncs.o recLinkedListFuncs.o strFuncs.cpp tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./tests 1

llTests: llTests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
