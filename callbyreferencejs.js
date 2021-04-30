function callByreference(obj) { 
    console.log("Inside Call by Value Method"); 
    obj.x = 100; 
   obj.y= 200; 
   sum=obj.x+obj.y;
   console.log("x =" + obj.x +"y =" + obj.y); 
    console.log("sum=",sum); 
  } 
  let obj={x:10,y :20 ,}
  console.log("Before Call by Value Method"); 
  console.log(obj); 
  callByreference(obj) 
  