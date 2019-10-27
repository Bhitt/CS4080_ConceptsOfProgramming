//Sorting function  that takes different comparison functions as an argument
function sort(students, comparison){
	let temp;
	let n = students[0].length-1;
	do {
		for(let i=0;i<n;i++){
			//check with passed in comparison method
			if(comparison(students,i)){
				//swap names first
				temp = students[0][i];
				students[0][i] = students[0][i+1];
				students[0][i+1] = temp;
				//swap scores	
				temp = students[1][i];
				students[1][i] = students[1][i+1];
				students[1][i+1] = temp;

				// printStudents(students);
				// console.log(" ");
			}
		}
		n--;
	}while(n>0);
}

// Auxilary functions for sort

//sort in ascending order of names, if same name then ascending order of scores
function comparison1(s, ind){
	//swap students if names not in ascending order
	if(s[0][ind] > s[0][ind+1]){
		return true;
	}
	//if names are the same
	if(s[0][ind] === s[0][ind+1]){
		//swap students if grades not in ascending order
		if(s[1][ind] > s[1][ind+1]){
			return true;
		}
	}
	return false;
}

//sort in ascending order of names, if same name then descending order of scores
function comparison2(s, ind){
	//swap students if names not in ascending order
	if(s[0][ind] > s[0][ind+1]){
		return true;
	}
	//if names are the same
	if(s[0][ind] === s[0][ind+1]){
		//swap students if grades not in descending order
		if(s[1][ind] < s[1][ind+1]){
			return true;
		}
	}
	return false;
}

//sort in descending order of names, if same name then descending order of scores
function comparison3(s, ind){
	//swap students if names not in descending order
	if(s[0][ind] < s[0][ind+1]){
		return true;
	}
	//if names are the same
	if(s[0][ind] === s[0][ind+1]){
		//swap students if grades not in descending order
		if(s[1][ind] < s[1][ind+1]){
			return true;
		}
	}
	return false;
}




function printStudents(students){
	for(let i=0;i<students[0].length;i++){
		console.log(students[0][i]+" "+students[1][i]);
	}
}



//student array
var students = [["Dan","Adam","Fiona","Kathy","Dan","Adam",
				 "Kalin","Adam","Zehr","Mona","Kevin","Elma"],
				 [45,39,42,44,34,41,
				 50,40,43,42,35,48]];


sort(students,comparison1);
printStudents(students);
console.log("-------------------------");

sort(students,comparison2);
printStudents(students);
console.log("-------------------------");

sort(students,comparison3);
printStudents(students);