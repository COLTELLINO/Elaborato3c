# Elaborato3c

Specifiche:
• Scrivere un programma che, dato in input un intero positivo x, stampi:
– il numero x al contrario
– il complemento a 10 di x
– il numero di cifre zero in x
• L’intero senza segno x (i.e. tipo unsigned int) deve essere letto da
tastiera, tramite l’utilizzo dell’istruzione:
scanf("%u",&x);
• Il programma deve stampare unicamente il risultato del calcolo. Esempi:
1. Se il numero inserito è 0, il programma deve stampare
0 10 1
2. Se il numero inserito è 100, il programma deve stampare:
1 900 2
3. Se il numero inserito è 1234, il programma deve stampare:
4321 8766 0
Vincoli:
• Non è possibile utilizzare le istruzioni di salto break, continue, goto.
• E’ richiesto l’utilizzo di strutture di controllo iterative distinte, a scelta.
Per essere precisi, non è possibile utilizzare unicamente il costrutto
for per le tre stampe. Nello specifico, se si utilizza il ciclo for per
calcolare il contrario del numero in input, non potrà essere utilizzato
per calcolare il complemento a 10 e per contare il numero di zeri nel
numero. Lo stesso discorso vale per i costrutti while e do-while.
• Le stampe devono rispettare il seguente ordine:
1. numero al contrario
2. complemento a 10
3. numero di zeri
