CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= tests

COMMON_OBJECT_FILES = linkedListFuncs.o recLinkedListFuncs.o strFuncs.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./tests 1
	./tests 2
	

tests: tests.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
