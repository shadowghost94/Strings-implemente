# Strings-implemente
Création d'une classe pour faciliter la gestion des chaines de caractères en c++.

Avec le language C, une chaine de caractère est représenté sous la forme
d'un tableau de caractère dont le dernier élément est supposé contenir le caractère null '\0',
qui indique la fin de la chaine. Ainsi quand on prend une chaine quelconque "ABCDE", la longueur
réelle de la chaine est de 6 caractères, soit un caractère de plus que le nombre de caractère entre guilemets. Cette dernière implémentation est la source de nombreux problèmes pour le 
programmeur. 
	Pour pallier à ce problème, nous créons une classe Strings, ayant les attributs
