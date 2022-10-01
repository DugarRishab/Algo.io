var findMedianSortedArrays = function (nums1, nums2) {

	nums1.sort();
	nums2.sort();

    let m = nums1.length;
    let n = nums2.length;
    
	let arr = nums1.concat(nums2);
	arr.sort(sortNumber);

	function sortNumber(a, b) {
		return a - b;
	}

    let x= (m+n - 1 )/2;
    let y= Math.floor(x);
	let z = Math.ceil(x);
	console.log("median of array: ", (m + n) / 2);
	console.log("array: ", arr);
    if(y == z){
		
		return (arr[x]);
    }
    else {
		return ((arr[y] + arr[z]) / 2);
    }
    
}; 
console.log(findMedianSortedArrays([-2, -1], [3]));