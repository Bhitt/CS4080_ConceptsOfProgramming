function find_Max(matrix,m,n){
	//placeholders for output and comparison
	var temp, x,y;
	temp = matrix[0][0];
	x=0;
	y=0;
	//loop through all elements
	for(var i=0;i<m;i++){
		for(var j=0;j<n;j++){
			//if element is greater than current top
			if(matrix[i][j] > temp){
				//set the current element to the new top
				temp = matrix[i][j];
				x = i;
				y = j;
			}
		}
	}

	//Output results
	console.log("The largest element ("+temp+") was" +
		" found at position ("+x+","+y+")");
}


var matrix = [[1,2,4,4,5,5,4,2],[3,1,1,5,4,5,6,2],
			  [3,2,6,2,1,2,3,5],[4,6,2,1,3,4,5,1],
			  [2,3,4,5,7,1,2,1],[4,5,3,1,1,1,1,1]];
			  // [1,2,3,4,5,4,3,2],[1,2,1,3,2,3,4,1]];

var matrix2 = [["Dan","Adam","Fiona","Kathy"],["Dan","Adam","Kalin","Adam"],["Zehr","Mona","Kevin","Elma"],["Theon","Brandon","John","Rob"],
			  ["Gendry","Cercei","Tommen","Sam"],["Jorah","Danaerys","Gren","Melisandre"],["Robert","Arya","Sansa","Rickon"],["Ramsay","Catelyn","Eddard","Barric"],
			  ["Steve","Nancy","Eleven","Will"],["Bilbo","Frodo","Gandalf","Sauron"],["Vader","Luke","Yoda","Palpatine"],["Arthur","Bruce","Harley","Alfred"]];

find_Max(matrix, matrix.length, matrix[0].length);

find_Max(matrix2, matrix.length, matrix[0].length);