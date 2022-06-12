
test:test.o BasicFuncWC.o
	g++ test.o BasicFuncWC.o -o test
test.o:test.cpp
	g++ -c test.cpp
BasicFuncWC.o:BasicFuncWC.cpp
	g++ -c BasicFuncWC.cpp

.PHONY:clean
clean:
	del /q *.o
	del /q *.exe