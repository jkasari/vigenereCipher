all: encrypt decrypt

encrypt:
	g++ -std=c++17 encrypt.cpp -o encrypt

decrypt:
	g++ -std=c++17 decrypt.cpp -o decrypt

test:
	g++ -std=c++17 test.cpp -o test
	./test

clean:
	rm -rf encrypt decrypt test

.PHONY: all encrypt decrypt test clean