PROJECT=acm
SRC=main.c

test: $(SRC)
	gcc -o $(PROJECT) $(SRC)

