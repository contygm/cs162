default: main.cpp fibonacci.cpp
	g++ main.cpp fibonacci.cpp -o lab

zip:
	zip -D Lab10_Conty_Genevieve.zip *.hpp *.cpp design-reflection.pdf makefile

valgrind:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./lab

clean: $(CLEAN)
	rm lab