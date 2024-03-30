output: main.o customerentry.o itementry.o bill.o
	gcc main.o customerentry.o itementry.o bill.o -o output

main.o: main.c
	gcc -c main.c

customerentry.o: customerentry.c
	gcc -c customerentry.c 

itementry.o: itementry.c 
	gcc -c itementry.c 

bill.o: bill.c
	gcc -c bill.c