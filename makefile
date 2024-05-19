output: main.o customerentry.o itementry.o bill.o login.o prices.o display.o
	gcc main.o customerentry.o itementry.o bill.o login.o prices.o display.o -o output

main.o: main.c
	gcc -c main.c

customerentry.o: customerentry.c
	gcc -c customerentry.c 

itementry.o: itementry.c 
	gcc -c itementry.c 

bill.o: bill.c
	gcc -c bill.c

login.o: login.c
	gcc -c login.c

prices.o: prices.c
	gcc -c prices.c

display.o: display.c
	gcc -c display.c
