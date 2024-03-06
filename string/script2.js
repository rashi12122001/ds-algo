console.log("script 2 is running")
let a=prompt("enter ur string ")
let b=prompt("enter character to be removed")
let a2;
let m;
let k;
    for(let i=0;i<a.length;i++){
        if(a[i]===b){
            m=i;
           k= a.length-1;
           break;
        }

    }
    a2=a.substring(0, m) + a.substring(m + 1);

console.log("new name is hi " + a2 +" size of the new array is " +  k)