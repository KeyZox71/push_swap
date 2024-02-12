#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int				nb_init;
	int				nb;
	struct s_stack	*next;
}					t_stack;

t_stack	*ft_stacknew(int content)
{
	/* creer avec malloc(), un maillon avec comme nb_init -> content*/
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	return (NULL);
}

int	ft_stacksize(t_stack *stack)
{
	/*donne la taille d'une t_stack*/
	return (0);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	/* ajoute a la fin de stack -> new*/
	return ;
}

t_stack	*ft_stacklast(t_stack *stack)
{
	/* renvoie le dernier maillon*/
	return (NULL);
}

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	/* ajoute au debut de stack -> new*/
	return ;
}

int	ft_verif_nb(char const *str)
{
	/*verifie que un str est un nombre valable,
	qu'il passe dans atoi,
	et qu'il ne depasse pas les limites des int*/

	/*renvoie un booléen si le nb est 
	valide(1)
	invalide (0)*/
	return (0);
}

t_stack *fill_struct(int ac, char **av)
{
	/*remplie la structure avec les élements de av
	-> il faut split chaque av
	"3 2" "1 10" "5" -> 3 2 1 10 5
	et verifier que chaque nb passe dans atoi
	
	puis utiliser atoi pour remplir la structure choisit
	
	si un nb est invalide, ne pas oublier de free, et renvoyer NULL*/
}

int	verif_double(t_stack *stack)
{
	/*verifie si la liste ne contient aucun doublons*/

	/*renvoie un booléen si la liste est
	bonne (aucun doublons) -> (1)
	pas bonne (1 ou plusieurs doublons) -> (0)*/
	return (0);
}

//j'espere que le debut étais pas trop dur car voici un premier gros defi
// tu dois "lisser" toutes les valeur, a partir de 0, et il n'y aura pas d'ecart superieur a 1
// pour ca tu va assiger a chaque maillon->nb une valeur
// qui depend de toute les nb_init de la list
// 0 1000 2 2000 -> 0 2 1 3
// -4 1 9 5 2 8 4 -> 0 1 6 4 2 5 3
// une vision simple de le voir/le coder:
//compter combien d'element dans toute la liste possede un nb_init en dessous du nb_init conserner
void	replace_nb_init(t_stack *stack)
{
	/*assigne pour chaque maillon, un nb,
	ce nb est la possition finale dans la liste trier qu'il aura*/
}



// mtn que tu a modifier tous et simplifier les nb_init dans nb
// a partir de mtn tu ne touche plus du tout a nb_init,
// uniquement a nb

int	is_sorted(t_stack *stack_a)
{
	/*verifie si la liste est trier*/

	/*renvoie un booléen si la liste est
	trier(1)
	pas trier(0)*/
	return (0);
}



// il va falloir attendre la v2 pour les tests des fonctions a partir de mtn
//, et pour les explications plus soffistiquer de la sutie:)
// mais tu peux quand meme les faire sans aide ? :)

void	sa(t_stack *stack_a)
{
	/*echange les 2 elements en haut de la pile
	print "sa"*/
}

void	sb(t_stack *stack_b)
{
	/*echange les 2 elements en haut de la pile
	print "sb"*/
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	/*effectue sa et sb
	print "ss"*/
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	/*envoie l'element en haut de la pile b -> en haut de la pile a
	print "pa"*/
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	/*envoie l'element en haut de la pile a -> en haut de la pile b
	print "pb"*/
}

void	ra(t_stack *stack_a)
{
	/*envoie l'element en haut de la pile a -> en bas de la pile a
	print "ra"*/
}

void	rb(t_stack *stack_b)
{
	/*envoie l'element en haut de la pile b -> en bas de la pile b
	print "rb"*/
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	/*effectue ra et rb
	print "rr"*/
}

void	rra(t_stack *stack_a)
{
	/*envoie l'element en bas de la pile a -> en haut de la pile a
	print "rra"*/
}

void	rrb(t_stack *stack_b)
{
	/*envoie l'element en bas de la pile b -> en haut de la pile b
	print "rrb"*/
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	/*effectue rra et rrb
	print "rrr"*/
}
