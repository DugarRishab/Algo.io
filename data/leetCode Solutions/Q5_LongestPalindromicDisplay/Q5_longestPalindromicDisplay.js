// 1 WAY OF DOING THIS :

var longestPalindrome = function (s) {
	let j = 0;
	let str = "", revStr, max = "", ans = "";
	let arr = [];
	
	for (let i = j; i < s.length; i++) {

		//str = str.concat(s[i]);
		arr = Array.from(arr).push(s[i]);
		revStr = Array.from(arr).reverse().join('');
		str = Array.from(arr).join('');

		if (revStr === str) {
			max = str;
		}
		if (i === s.length - 1) {
			j++;
			i = j - 1;
			if (max.length > ans.length)
				ans = max;
			max = "";
			arr = [];
			revStr = "";
		}
	}

	return ans;
};



// 2nd WAY OF DOING THIS:

// var longestPalindrome = function (s) {
// 	let j = 0, longest, ans="", k=0;
// 	let str= [];

// 	for (let i = j; i < s.length; i++){

// 		j = s.slice(i + 1, s.length).indexOf(s[i]);

// 		if (j > 0) {
// 			i = s.indexOf(s[i]);
// 			//str = s.slice(i, j);
// 			if (s.slice(j, i).split('') === s.slice(j, i).split('').reverse()) {
// 				longest = s.slice(j, i);
// 				if (longest.length > ans.length) {
// 					ans = longest; 
// 				}
// 			}
// 			i = j;
// 		}
// 		else {
// 			k++;
// 			i = k;

// 		}
		
// 	}

// 	return ans
// }


console.log("answer: ", longestPalindrome('babacbcab'));