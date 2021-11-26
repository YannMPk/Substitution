# Substitution
Programme qui implémente un chiffrement de substitution

Dans un chiffrement par substitution, nous « chiffrons » (c'est-à-dire masquons de manière réversible) un message en remplaçant chaque lettre par une autre lettre. Pour ce faire, nous utilisons une clé : dans ce cas, un mappage de chacune des lettres de l'alphabet à la lettre à laquelle elle doit correspondre lorsque nous la cryptons. Pour « déchiffrer » le message, le destinataire du message aurait besoin de connaître la clé afin de pouvoir inverser le processus : traduire le texte crypté (généralement appelé texte chiffré ) dans le message d'origine (généralement appelé texte en clair ).

Une clé, par exemple, peut être la chaîne NQXPOMAFTRHLZGECYJIUWSKDVB. Cette clé de 26 caractères signifie que A(la première lettre de l'alphabet) doit être convertie en N(le premier caractère de la clé), B(la deuxième lettre de l'alphabet) doit être convertie en Q(le deuxième caractère de la clé), et ainsi de suite.

Un message comme HELLO, alors, serait crypté comme FOLLE, remplaçant chacune des lettres selon le mappage déterminé par la clé.

Écrivons un programme appelé substitutionqui vous permet de chiffrer des messages à l'aide d'un chiffrement de substitution. Au moment où l'utilisateur exécute le programme, il doit décider, en fournissant un argument de ligne de commande, quelle doit être la clé dans le message secret qu'il fournira au moment de l'exécution.

Voici quelques exemples de la façon dont le programme pourrait fonctionner. Par exemple, si l'utilisateur saisit une clé de YTNSHKVEFXRBAUQZCLWDMIPGJOet un texte en clair de HELLO :

$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO
plaintext:  HELLO
ciphertext: EHBBQ
Voici comment le programme pourrait fonctionner si l'utilisateur fournit une clé de VCHPRZGJNTLSKFBDQWAXEUYMOIet un texte en clair de hello, world:

$ ./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext:  hello, world
ciphertext: jrssb, ybwsp
Notez que ni la virgule ni l'espace n'ont été remplacés par le chiffre. Remplacez uniquement les caractères alphabétiques ! Notez également que la casse du message d'origine a été conservée. Les lettres minuscules restent minuscules et les lettres majuscules restent majuscules.

Que les caractères de la clé elle-même soient en majuscule ou en minuscule n'a pas d'importance. Une clé de VCHPRZGJNTLSKFBDQWAXEUYMOIest fonctionnellement identique à une clé de vchprzgjntlskfbdqwaxeuymoi(telle qu'elle est, d'ailleurs, VcHpRzGjNtLsKfBdQwAxEuYmOi).

Et si un utilisateur ne fournit pas de clé valide ?

$ ./substitution ABC
Key must contain 26 characters.
Ou vraiment ne coopère pas ?

$ ./substitution
Usage: ./substitution key
Ou même…

$ ./substitution 1 2 3
Usage: ./substitution key
