// program to demonstrate local and global variables
function scopeExampleFunction() {
	var a = 10;
	var b = 20;
	console.log("local variables: " + a + " " + b);
}
var a = 100;
var b = 200;
scopeExampleFunction();
console.log("global variables: " + a + " " + b);