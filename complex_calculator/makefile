complex_calculator = all.exe
SRC=src\sum.c\
src\sqr.c\
src\mul.c\
src\div.c
MAIN=test.c
TEST = unity\unity.c\
test_complex_calculator.c
INC = -I inc
UNITY = -I unity
$(complex_calculator) : $(SRC) $(MAIN)
	gcc $(INC) $(SRC) $(MAIN) -o all.exe
run : $(complex_calculator)
	./$(complex_calculator)
test:$(SRC) $(TEST)
	gcc $(INC) $(UNITY) $(TEST) $(SRC) -o test.exe
clean :
	 del /q *.exe	  	
