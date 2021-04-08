complex_calculator = all.exe
SRC=test_complex_calculator.c\
src\sum.c\
src\sqr.c\
src\mul.c\
src\div.c
TEST = unity\unity.c
INC = -I inc
UNITY = -I unity
$(complex_calculator) : $(SRC)
	gcc $(INC) $(UNITY) $(TEST) $(SRC) -o all.exe
run : $(complex_calculator)
	./$(complex_calculator)
clean :
	 del /q *.exe	  	