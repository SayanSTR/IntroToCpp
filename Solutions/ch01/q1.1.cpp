/* 1. Modify the program given in the text so that it asks for the side length of the 
 * polygon to be drawn in addition to asking for the number of sides.
 */

#include <simplecpp>
main_program
{
	int nsides;
	cout << "Type in the number of sides: ";
	cin >> nsides;
	turtleSim();
	repeat(nsides) {
		forward(50);	// Each side will have length 50 pixels
		left(360.0/nsides); // Be ause sum(exterior angles of a polygon) = 360
	}
	wait(5);
}

