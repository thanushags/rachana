
var str = prompt("Enter the Input");
if(!(isNaN(str)))
{
var num,rev=0,remainder;
num = parseInt(str);
while(num!=0) {
remainder = num%10;
num = parseInt(num/10);
rev = rev * 10 + remainder;
}
alert("Reverse of "+str+" is "+rev);
}
else
{
str = str.toUpperCase();
for(var i = 0; i < str.length; i++) {
var chr = str.charAt(i);
if(chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')break;
}
if( i < str.length )
alert("The position of the left most vowel is "+ str + " is "+(i+1));
else
alert(" vowel not found "+str);
}
