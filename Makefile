CPP = g++
SFML = -lsfml-graphics -lsfml-window -lsfml-system


main: main.o Cartes.o Partie.o Joueur.o Royaume.o Remodel.o
	$(CPP) -o $@ $^ $(SFML)

%.o : %.CPP
	$(CPP) -o $@ -c $<

run: main
	./main