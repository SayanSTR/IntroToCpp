/* 9. When you hold a set of cards in your hand, you usually arrange them fanned
 * out. Say you start with cards stacked one on top of the other. Then you
 * rotate the ith card from the top by an amount proportional to i (say 10i
 * degrees to the left) around the bottom left corner. Now, we can see the top
 * card completely, but the other cards are seen only partially. In particular,
 * only a triangular portion of each card is seen, with the top left corner
 * being at the apex of each triangle. This is the figure that you are to draw.
 * (a)Draw it assuming the cards are transparent. (b)Draw it assuming the cards
 * are opaque. For this some trigonometric calculation will be necessary.
 * In both cases, use repeat statements to keep your program small as possible.
 */

#include <simplecpp>
main_program
{
	int cardWidth = 50, cardHeight = 100, rotation = 10, numberOfCards = 13;

	turtleSim();
	// Draw 'numberOfCards' cards fanned out each at 'rotation' degree with next
	repeat(numberOfCards)
	{
		// Draw single rectangular card
		repeat(2)
		{
			forward(cardWidth);
			left(90);
			forward(cardHeight);
			left(90);
		}
		// Rotate slightly
		left(rotation);
	}

	wait(5);
}
