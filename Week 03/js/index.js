
// ___User Input___


// const rl=require("readline-sync");
// var value=rl.question("Enter your Name:");
// console.log("Hi. "+value);


// ___________

// const readline = require("readline");

// const rl = readline.createInterface({
//   input: process.stdin,
//   output: process.stdout,
// });

// rl.question("what is your name? ", function (answer) {
//   console.log(`Hi, ${answer}`);
//   rl.close();
// });



// ___User Input___

// const promt = require("prompt-sync")({
//     sigint: true
// });
// let name = promt("Enter your name:");
// console.log("Hello " + name)


// ___________02

// const prompt = require("prompt-sync")({ sigint: true })

// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }

// var number1, number2, sum;
// number1 = Number(input("Enter INteger Number:"));
// number2 = Number(input("Enter decimal Number:"));

// sum=number1+number2;

// console.log(`The sum is ${(sum)}`);

// ______03

// const prompt = require("prompt-sync")({ sigint: true })

// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }

// var p=Number(input("Enter Principal amount:"));
// var r=Number(input("Enter Interest rate:"));
// var n=Number(input("Enter Number of years:"));

// var si=(p*r*n)/100;
// console.log("Simple Intrest is: "+si.toFixed(2));


// __________04

// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }

// var mark=Number(input("Enter your Mark:"));
// if(mark<0||mark>100){
//     console.log("Enter your Corect Mark !!!");
// }else if(mark<50){
//     console.log("Your Faild");
// }else {
//     console.log("your Passed");
// }

// _________05



// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var mark = Number(input("Enter your tottal Mark"));
// if (mark < 0 || mark > 100) {
//     console.log("Enter your Corect Mark !!!");
// }
// if (mark >= 90) {
//     console.log("Your grade is:A");
// } else if (mark >= 80 && mark <= 89) {
//     console.log("Your grade is:B");
// } else if (mark >= 70 && mark <= 79) {
//     console.log("Your grade is:C");
// } else if (mark >= 60 && mark <= 69) {
//     console.log("Your grade is:D");
// } else if (mark >= 50 && mark <= 59) {
//     console.log("Your grade is:E");
// } else if (mark < 50) {
//     console.log("Your Failed");
// }


// __________06


// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var num = Number(input("Enter a day number"));
// switch (num) {
//     case 1:
//         console.log("Sunday");
//         break;
//     case 2:
//         console.log("Monday");
//         break;
//     case 3:
//         console.log("Tuesday");
//         break;
//     case 4:
//         console.log("Wednesday");
//         break;
//     case 5:
//         console.log("Thursday");
//         break;
//     case 6:
//         console.log("Friday");
//         break;
//     case 7:
//         console.log("Saturday");
//         break;
//     default:
//         console.log("Invalid Entry");
//         break;
// }





// _______07

// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var num = Number(input("Enter a number: "));
// var limit= Number(input("Enter a Limit of row: "));

// for(var i=1;i<=limit;i++){
//     console.log(i+" x "+num+" = "+i*num);
// }





// ____________08


// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var limit= Number(input("Enter a Limit: "));
// var sum=0;
// for(var i=1;i<=limit;i++){
//    if(i%2==1){
//     sum+=i;
//    }
// }
// console.log("Sum of odd numbers:"+sum);


// _________09

// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var limit = Number(input("Enter a Limit: "));

// for (var i = 1; i <= limit; i++) {
//     var s = "";
//     for (var j = 1; j <= i; j++) {
//         s += j + " ";
//     }
//     console.log(s);
// }



// _________10


// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var limit = Number(input("Enter a Limit: "));

// function getArray(msg) {
//     console.log(msg + "\n");
//     var arr = [];
//     for (var i = 0; i < limit; i++) {
//         arr[i] = Number(input(""));
//     }
//     return arr;
// }
// var arr1 = getArray("Enter elements of first array");
// var arr2 = getArray("Enter elements of secont array");
// console.log("After interchange:");
// for (let i = 0; i < limit; i++) {
//     temp = arr1[i];
//     arr1[i] = arr2[i];
//     arr2[i] = temp;
// }
// console.log("First Array:"+arr1);
// console.log("Secont Array:"+arr2);




// __________11


// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var limit = Number(input("Enter a Limit: "));
// console.log("Enter elements of array");
// var arr = [];
// var count=0;
// for (var i = 0; i < limit; i++) {
//     arr[i] = Number(input(""));
//     if(arr[i]%2==0){
//         count++;
//     }
// }

// console.log("Number of even numbers in the given array is:" + count);



// ___________12


// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var limit = Number(input("Enter a Limit: "));
// console.log("Enter elements of array");
// var arr = [];
// for (var i = 0; i < limit; i++) {
//     arr[i] = Number(input(""));
// }
// for(var i=0;i<limit;i++){
//     for(var j=i;j<limit;j++){
//         if(arr[i]<arr[j]&&i!=j){
//             var temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
// console.log("Sorted array is:" + arr);




// _________13


// const prompt = require("prompt-sync")({ sigint: true })
// function input(qust) {
//     let value = prompt(qust);
//     return value;
// }
// var string = input("Enter a string: ");
// var flag=0;
// for (var i = 0; i <string.length; i++) {
//     if(string.charAt(i)!=string.charAt((string.length)-1-i)){
//         flag=1
//         break;
//     }
// }
// if(flag){
//     console.log("Entered string is not a palindrome");
// }else{
//     console.log("Entered string is a palindrome");
// }



// _______14


// var limit = Number(input("enter a limit"));
// function getArray(limit){
//     console.log("haids");

//     return arr;
// }
// console.log("Enter elaments of first Array:");
// var arr1=getArray(limit);
// console.log("Enter elaments of Second Array:");
// var arr2=getArray(limit);
// var arr1=[][limit];
// for (i = 0; i < limit; i++) {
//     for (j = 0; j < limit; j++) {
//         arr1[i][j] = Number(input(""));
//     }
// }
// var sum=[][limit];
// for ( i = 0; i < limit; i++) {
//     var s="";
//     for ( j = 0; j < limit; j++) {
//         sum[i][j] = arr1[i][j]+arr2[i][j];
//         s+=sum[i][j]+" ";
//     }
//     console.log(s);
// }


// ___________14


// const rl=require("readline-sync");
// function input(qust='') {
//     var value=rl.question(qust);
//     return value;
// }
// var limit=Number(input('Enter a limit:'));
// var arr1=[];
// console.log('enter array elaments');
// for (i = 0; i < limit; i++) {
//     var temp=[];
//     for (j = 0; j < limit; j++) {
//        temp[j] = Number(input());
//     }
//     arr1[i]=temp;
// }
// var arr2=[];
// console.log('enter array elaments');
// for (i = 0; i < limit; i++) {
//     var temp=[];
//     for (j = 0; j < limit; j++) {
//        temp[j] = Number(input());
//     }
//     arr2[i]=temp;
// }
// var sum=[];
// for (i = 0; i < limit; i++) {
//     var temp=[];
//     for (j = 0; j < limit; j++) {
//        temp[j] = arr1[i][j]+arr2[i][j];
//     }
//     sum[i]=temp;
// }
// console.log("sum of 2 Array is:");
// console.log(sum);

// _____________15


// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// var limit = Number(input('Enter a limit:'));
// function getArray(limit) {
//     var arr = [];
//     for (i = 0; i < limit; i++) {
//         var temp = [];
//         for (j = 0; j < limit; j++) {
//             temp[j] = Number(input());
//         }
//         arr[i] = temp;
//     }
//     return arr;
// }

// function displayArray() {
//     var Arr = getArray(limit);
//     console.log(Arr);
// }
// displayArray();


// ___________16




// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }

// function isPrime(numbar) {
//     var flag = 0;
//     for (var i = 1; i <= numbar; i++) {
//         if (numbar%i == 0) {
//             flag++;
//         }
//     }
//     if (flag === 2)
//         return 1;
//     else
//         return 0;
// }
// if (isPrime(Number(input("Enter a Number:")))) {
//     console.log('The number is prime');
// } else
//     console.log('The number is Not prime');



// ___________17




// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// class Math {
//     getData() {
//         let num = [];
//         num[0] = Number(input("Enter 2 number:"));
//         num[1] = Number(input());
//         return num;
//     }
//     Addition() {
//         let num = this.getData();
//         return (num[0] + num[1])
//     }
//     Substraction() {
//         let num = this.getData();
//         return (num[0] - num[1])
//     }
//     Multiplication() {
//         let num = this.getData();
//         return (num[0] * num[1])
//     }
//     Division() {
//         let num = this.getData();
//         return (num[0] / num[1])
//     }
// }

// class Main extends Math {
//     Menu() {
//         var flag = true;

//         for (; flag;) {
//             console.log('________******_______');
//             console.log("1:Addition");
//             console.log('2:Substraction');
//             console.log('3:Multiplication');
//             console.log('4:Division');
//             console.log('5:Exit()');
//             console.log('\n_____****_____\n');
//             let choice = Number(input('Enter your choice:'))
//             switch (choice) {
//                 case 1:
//                     console.log(`Result of Addition is:${this.Addition()}`);
//                     break;
//                 case 2:
//                     console.log(`Result of Substraction is:${this.Substraction()}`);
//                     break;
//                 case 3:
//                     console.log(`Result of Multiplication is:${this.Multiplication()}`);
//                     break;
//                 case 4:
//                     console.log(`Result of Division is:${this.Division()}`);
//                     break;
//                 case 5:
//                     flag = false;
//                     break;
//                 default:
//                     console.log('Enter Corect option');
//                     break;
//             }

//         }
//     }
// }

// let main1 = new Main();
// main1.Menu();

// ________18



// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// function getMark(){
//     let mark=[];
//     console.log('Enter the marks scored by the students');
//     mark[0]=Number(input('Written test ='));
//     mark[1]=Number(input('Lab exams = '));
//     mark[2]=Number(input('Assignments ='));
//     return mark;
// }
// function overoallGrade(){
//     let mark=getMark();
//     let grade=((mark[0]*70)/100)+((mark[1]*20)/100)+((mark[2]*10)/100);
//     return grade;
// }
// console.log(`Grade of the student is:${overoallGrade()}`)







// _______19




// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }

// function incomeTax(income, tax) {
//     return (income * tax) / 100;
// }
// let income = Number(input('Enter your anual income: '));
// if(income<0)
//  console.log('Enter your income in corect');
// else if (income <= 250000)
//     console.log('you not be pay Iincome tax');
// else if (income > 250000 && income <= 500000)
//     console.log(`Income tax amount: ${incomeTax(income, 5)}`);
// else if (income > 500000 && income <= 1000000)
//     console.log(`Income tax amount: ${incomeTax(income, 20)}`);
// else if (income > 1000000 && income <= 5000000)
//     console.log(`Income tax amount: ${incomeTax(income, 30)}`);
// else if (income > 5000000)
//     console.log('I don\'t know about your tax');



// ___________20



// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let limit=Number(input('Enter a limit: '));
// let k=0;
// for(var i=1;i<limit;i++){
//     var s='';
//     for(var j=1;j<=i;j++){
//         k++;
//         s+=k+' ';
//     }
//     console.log(s);
// }





// _______________________________21



// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let limit=Number(input('Enter array limit: '));
// var arr=[];
// console.log('entr array elaments');
// for(var i=0;i<limit;i++){
//     arr[i]=Number(input());
// }
// let sum=[];
// for(var i=0;i<limit-1;i++){
//     sum[i]=arr[i]*arr[i+1];
// }
// console.log(`The sum of adjacent elaments are:`+sum);






// __________22



// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let limit = Number(input('Enter array limit: '));
// function getArray(limit) {
//     let arr = [];
//     console.log('enter array elaments');
//     for (var i = 0; i < limit; i++) {
//         let temp = [];
//         for (var j = 0; j < limit; j++) {
//             temp[j] = Number(input());
//         }
//         arr[i] = temp;
//     }
//     return arr;   
// }
// function addArray(arr1,arr2){
//     let sum=[];
//     for(var i=0;i<limit;i++){
//         let temp=[];
//         for(var j=0;j<limit;j++){
//             temp[j]=arr1[i][j]+arr2[i][j];
//         }
//         sum[i]=temp;
//     }
//     return sum;
// }
// function displayArray(arr){
//     console.log('The sum of 2 2D Array is:');
//     console.log(arr);
// }

// let arr1=getArray(limit);
// let arr2=getArray(limit);
// let sum=addArray(arr1, arr2);
// displayArray(sum);



// __________23

// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let limit = Number(input('Enter array limit: '));
// function getArray(limit) {
//     let arr = [];
//     console.log('enter array elaments');
//     for (var i = 0; i < limit; i++) {
//         let temp = [];
//         for (var j = 0; j < limit; j++) {
//             temp[j] = Number(input());
//         }
//         arr[i] = temp;
//     }
//     return arr;   
// }

// function displayArray(arr){
//     console.log('The 2D Array is:');
//     console.log(arr);
// }
// let arr=getArray(limit);
// displayArray(arr);


// ____________24



// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// class Area {

//     circle() {
//         let radius = Number(input('Enter the rsdius of the circle:'));
//         let area = Math.PI * radius ** 2;
//         console.log(`the area of the corcle is:${area}`);
//     }
//     square() {
//         let side = Number(input('Enter the side of square:'));
//         let area = side ** 2;
//         console.log(`the area of the squire is:${area}`);
//     }
//     rectangle() {
//         let sides = [];
//         sides[0] = Number(input('Enter the sides of rectangle:'));
//         sides[1] = Number(input());
//         let area = sides[0] * sides[1];
//         console.log(`the area of the rectangle is:${area}`);
//     }
//     triangle() {
//         let sides = [];
//         sides[0] = Number(input('Enter the heghte and base of triangle:'));
//         sides[1] = Number(input());
//         let area = 0.5 * sides[0] * sides[1];
//         console.log(`the area of the squire is:${area}`);
//     }
// }
// class MyClass extends Area {
//     Main() {
//         let flag = true;
//         for (; flag;) {
//             console.log('1.Circle');
//             console.log('2.Square');
//             console.log('3.Rectangle');
//             console.log('4.Triangle');
//             console.log('5.Exit()');
//             console.log('____*****____');
//             let choice = input('Enter your choice:-');
//             switch (choice) {
//                 case '1':
//                     this.circle();
//                     break;
//                 case '2':
//                     this.square();
//                     break;
//                 case '3':
//                     this.rectangle();
//                     break;
//                 case '4':
//                     this.triangle();
//                     break;
//                 case '5':
//                         flag=false;
//                     break;
//                 default:
//                     console.log('Enter corect choice');
//                     break;
//             }
//         }
//     }
// }
// let main1=new MyClass();
// main1.Main();


// ___________25




// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let library=[
//     {title:'Bill Gates',author:"The Road Ahead",status:true},
//     {title:'Steve Jobs',author:"Walter lsaacson",status:true},
//     {title:'Mockingjay: The Final Book of The Hunger Games',author:"Suzanne Collins",status:false}
// ]
// for(var i=0;i<library.length;i++){
//     if(library[i].status){
//         console.log(`\nAlready read \'${library[i].title}\' by ${library[i].author}`);
//     }else{
//         console.log(`\nYou still need to read \'${library[i].title}\' by ${library[i].author}`);
//     }
// }


// _____________26


// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let my_String=(input('enter a string :'));
// // let my_String=Number(input('enter a string :'));
// try {
//     console.log(`the revers :\'${(((my_String.split('')).reverse()).join()).replace(/,/g,'')}\'`);
// } catch (error) {
//     console.log("Error: my-String.split is not a function");
// }finally{
//     console.log(typeof(my_String));
// }



// ________27


// const rl = require("readline-sync");
// function input(qust = '') {
//     var value = rl.question(qust);
//     return value;
// }
// let heihght = Number(input('enter your height: '));
// try {
//     if (isNaN(heihght)) {
//         throw 'notANumberError';
//     } else if (heihght > 200) {
//         throw 'HugeHeightError';
//     } else if (heihght < 40) {
//         throw 'HugeHeightError';
//     } else {
//         console.log(`your height is :-${heihght}`);
//     }
// } catch (error) {
//     console.error(error);
// }


// __________28



const rl = require("readline-sync");
function input(qust = '') {
    var value = rl.question(qust);
    return value;
}










// __________29


const rl = require("readline-sync");
function input(qust = '') {
    var value = rl.question(qust);
    return value;
}













