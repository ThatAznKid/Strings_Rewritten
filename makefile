clean:
	rm *~

run: stringy.cpp
	gcc stringy.cpp -o stringy
	./stringy
