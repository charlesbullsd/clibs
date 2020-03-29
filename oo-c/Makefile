all:
	clang -c interface.c -o interface.o
	# adding -lm to make sure the math library gets included.
	clang -lm -o client client.c interface.o
