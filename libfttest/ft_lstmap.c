/* Itère sur la liste ’lst’ et applique la fonction ’f ’au contenu de chaque élément.
Crée une nouvelle liste résultant des applications successives de ’f’.
La fonction ’del’ est là pour détruire le contenu d’un élément si nécessaire.
st: L’adresse du pointeur vers un élément.
f: L’adresse de la fonction à appliquer.
del: L’adresse de la fonction permettant de supprimer le contenu d’un élément
Valeur de retour : La nouvelle liste. NULL si l’allocation échoue
fonctions autorisees : malloc, free */