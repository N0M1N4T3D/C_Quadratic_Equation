TARGET = Quadratic_Equation_Project
CC = gcc

SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o : %.c
	$(CC) -c $< -o $@

test_quadratic_equation: test_quadratic_equation.o quadratic_equation.o
	$(CC) -o test_quadratic_equation test_quadratic_equation.o quadratic_equation.o -lm

check: Quadratic_Equation_Project test_quadratic_equation
	./test_quadratic_equation

check: $(TARGET) $(TEST)
	./$(TARGET)


clean :
	rm $(TARGET) *.o