Main: Find_Faults.o Measure_Typing_Speed.o Generate_Sentence.o Main.o
	gcc Find_Faults.o Measure_Typing_Speed.o Generate_Sentence.o Main.o -o Main

Main.o: Main.c Find_Faults.h Generate_Sentence.h Measure_Typing_Speed.h
	gcc -c Main.c -o Main.o


Find_Faults.o: Find_Faults.c Find_Faults.h
	gcc -c Find_Faults.c -o Find_Faults.o

Generate_Sentence.o: Generate_Sentence.h Generate_Sentence.c
	gcc -c Generate_Sentence.c -o Generate_Sentence.o

Measure_Typing_Speed.o: Measure_Typing_Speed.h Measure_Typing_Speed.c Find_Faults.h
	gcc -c Measure_Typing_Speed.c -o Measure_Typing_Speed.o
	