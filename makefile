CC = gcc
AR = ar 
 CFLAGS = -Wall -g
 LFLAGS = -shared
 SFLAGS = rcs
 FP = -fPIC
 # File names
GRAPH = my_graph.c
HEADER = my_mat.h
SRC = my_mat.c
PARTWO = my_Knapsack.c


.PHONY: all clean 
# Build everything 
all: my_graph my_Knapsack

my_graph: my_graph.o my_mat.o
	$(CC) my_graph.o my_mat.o -o my_graph 

my_Knapsack: my_Knapsack.o my_mat.o
	$(CC) my_Knapsack.o -o my_Knapsack

my_Knapsack.o: $(PARTWO) $(HEADER)  
	$(CC) $(CFLAGS) -c $(PARTWO) 
	
my_graph.o: $(GRAPH) $(HEADER)  
	$(CC) $(CFLAGS) -c my_graph.c

my_mat.o: $(SRC) $(HEADER)
	$(CC) $(CFLAGS) -c $(SRC)

	# Clean command to cleanup all the compiled files (*.o, *.a, *.so, *.gch)
clean:
	rm -f   *.o *.a *.so *.gch my_graph my_Knapsack

