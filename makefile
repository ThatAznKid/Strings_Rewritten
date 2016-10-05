clean:
	rm *~

run: stringy.c
	gcc stringy.c -o stringy
	./stringy
