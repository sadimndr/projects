function callByValue(x, y) { 
  console.log("Inside Call by Value Method"); 
  x = 100; 
  y= 200; 
 sum=x+y;
 console.log("x =" + x +"y =" + y); 
  console.log("sum=",sum); 
} 
let x = 10; 
let y= 20; 
console.log("Before Call by Value Method"); 
console.log("x =" + x + "y =" + y); 
callByValue(x, y) 
