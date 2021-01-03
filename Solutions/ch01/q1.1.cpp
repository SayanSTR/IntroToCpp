/* 1. Modify the program given in the text so that it asks for the side length of the
 * polygon to be drawn in addition to asking for the number of sides.
 */

#include <simplecpp>
main_program
{
	int nsides, length;
	cout << "Type in the number of sides: ";
	cin >> nsides;
	cout << "Type in the length of sides: ";
	cin >> length;
	turtleSim();
	repeat(nsides) {
		forward(length);	// Each side will have length "length" pixels
		left(360.0/nsides); // Because sum(exterior angles of a polygon) = 360
	}
	wait(5);
}
