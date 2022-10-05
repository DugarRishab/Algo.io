// In this problem, we need to check whether the two given rectangles overlap or not.
// To check this, we need to check whether the intervals defined by coordinates of the rectangles on X-axis and Y-axis overlap or not.
// To check whether the interval defined by points (x1,x2) and (x3,x4) overlap or not, we check if,
// max(x1,x3)<min(x2,x4),
// if above is the case, then the overlapped interval is ( max(x1,x3) , min(x2,x4) ), else the two intervals defined do not overlap.
// Here, Kindly note that (x1,x2) represent an interval on a number line and not the x coordinate and y coordinate of a point in 2D plane.
// For a rectangle to be formed by overlapping, the intervals enclosed by both X coordinates and Y coordinates of the two rectangles should overlap.
// Thus, to calculate the total area defined by coordinates of two rectangles will be calculated as :-
// Total Area:- Area(Rectangle 1) + Area(Rectangle 2) - Area(Overlapped triangle)
// Let's go through the code now...

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
		int rec1=abs(ax2-ax1)*abs(ay2-ay1);   //Area(Rectangle 1)
        int rec2=abs(bx2-bx1)*abs(by2-by1);   //Area(Rectangle 2)
		
		//As explained above, if intervals overlap, max(x1,x3) < min(x2,x4) and overlapped interval
		//is ( max(x1,x3) , min(x2,x4) ).
		
        int ox1=(max(ax1,bx1)-min(ax2,bx2));   //if ox1 is negative, abs(ox1) is the length of overlapped rectangle, else rectangles do not overlap.
        int oy1=(max(ay1,by1)-min(ay2,by2));   //breadth of overlapped rectangle
		
		int rec3=0;  //if rectangles do not overlap, area of overlapped rectangle is zero.
        if(ox1<0&&oy1<0)   //if both ox1 and oy2 are negative, two rectangles overlap. 
            rec3=ox1*oy1;
        return rec1+rec2-rec3;  //Area(Rectangle 1) + Area(Rectangle 2) - Area(Overlapped triangle)   
    }
};
