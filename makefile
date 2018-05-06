.PHONY : clean
main:ticket.c
	gcc -o $@ $^ -lpthread 
clean:
	rm main
