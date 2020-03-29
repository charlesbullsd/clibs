struct library {
	void (*print)(char* to_print);
	int (*add)(int i, int j);
};

extern const struct library Library;
