complex_calculator = execute.exe
SRC = test.c\
src\sum.c\
src\sqr.c\
src\mul.c\
src\div.c

INC = inc

$(complex_calculator): $(SRC)
	gcc -I $(INC) $(SRC) -o execute.exe
	
run: $(complex_calculator)
	$(complex_calculator)
	
clean:
	del /q *.exe