#include <stdio.h>

/*function linear_2_param that prints function f(x)=ax+b with given parameter a and b, e.g f(x)=2x+5*/

void linear_2_param (int a, int b) {


		
	printf("Your function now looks like this: f(x)=%dx + %d\n",a,b); 


return;

}

void linear_range (int a, int b) { /*by coincidence same names as in line 5 - they are parameters of another function*/

	printf("Values f(x) for the range <%d, %d>:\n", a,b);

return;
}

int linear_values (int a, int x, int b){


	int result = a*x+b;
	


return result;

}

void edit_function (int a, int x, int b){

	int wynik = linear_values (a,x,b);

	printf("f(%d)=%d\n", x, wynik);

return;

}

void function_loop (int a, int b, int lower, int upper) {


	int x;

	for (x=lower; x<=upper; ++x) {

	edit_function(a,x,b);

}

return;
}

int main (){

	linear_2_param (2,6);

	linear_range (0,2);
	
	linear_values(2,0,6);
	
//	edit_function(2,0,6);	

	function_loop (2,6,0,2);	
return 0;
}
