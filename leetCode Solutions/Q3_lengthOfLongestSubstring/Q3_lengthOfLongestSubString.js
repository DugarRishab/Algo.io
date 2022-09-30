// > 1st Way: BigO = n^3

// var lengthOfLongestSubstring = function(s) {
// 	let max = 0;
// 	if (s.length == 1)
// 		return 1;
	
// 	for (let i = 0; i < s.length; i++){
// 		const arr = [];
// 		let longest = 0;
// 		for (let j = i; j < s.length; j++){
// 			console.log(s[j]);
			
// 			if (arr.includes(s[j])) {
// 				break;
// 			}
// 			arr.push(s[j]);
// 			longest++;
// 		}
// 		if (max < longest) {
// 			max = longest;
// 		}
// 	}

// 	return max;
// };

// console.log(lengthOfLongestSubstring("c"));


// > 2nd Way

var lengthOfLongestSubstring = function (s)
{
	// s = Array.from(s);

	let max = 0, i = 0, flag, longest = 0;
	let arr = [];
	if (s.length == 1)
		return 1;
		
	for (let j = i; j < s.length; j++) {

		if (arr.includes(s[j])) {

			for (let k = i; k < j; k++){
				if (s[k] == s[j]) {
					flag = k;
				}
			}
			console.log('true');
				
			console.log(flag);
			arr = [];
			i = flag;
			j = i;
			longest = 0;
		}
		
		else {
			console.log('false');
			arr.push(s[j]);
			longest++;
			if (longest > max) {
				max = longest;
			}
		}
	}
	
	return max;
};
	
console.log(lengthOfLongestSubstring("bbbbb"));