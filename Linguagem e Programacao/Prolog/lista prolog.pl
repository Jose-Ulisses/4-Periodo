%José Ulisses - 4° Computação, PUC Minas.

%1
estudantes(amam_trabalho).
trabalho(X) :- estudantes(X).

%2
parente(ivo, eva).
parente(gil, rai).
parente(gil, clô).
parente(gil, ary).
parente(rai, noé).
parente(ary, gal).
parente(ana, eva).
parente(bia, rai).
parente(bia, clô).
parente(bia, ary).
parente(eva, noé).
parente(lia, gal).

homem(ivo).
homem(gil).
homem(rai).
homem(ary).
mulher(ana).
mulher(eva).
mulher(bia).
mulher(clô).
mulher(lia).

pai(X, Y) :- parente(X,Y), homem(X).
mae(X, Y) :- parente(X,Y), mulher(X).
gerou(X,Y) :- parente(X,Y).

%3
/*
	a) Head = 1,
       Tail = [2,3,4,5]

	b) X = licet
*/

%4
imprime([]).
imprime([Head|Tail]) :- write(Head), imprime(Tail).
  

%5
verificaNota([]) :- !.
verificaNota([Head|Tail]) :- situacao(Head), verificaNota(Tail).

situacao(Head) :- Head >= 60, Head =< 100, write(Head),write(' Aprovado!'), nl.
situacao(Head) :- Head >= 30, write(Head), write(' Recuperacao!'), nl.
situacao(Head) :- Head < 30, Head >= 0, write(Head), write(' Reprovado!'), nl.

%6
vogal(a).
vogal(e).
vogal(i).
vogal(o).
vogal(u).

contaVogal([], 0):- !.
contaVogal([H|T], Contador) :-
    vogal(H),
    contaVogal(T, Temp),
    Contador is Temp + 1.

contaVogal([_|T], Contador) :-
    contaVogal(T, Contador).