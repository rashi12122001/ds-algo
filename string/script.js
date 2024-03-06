console.log("wap to enter a string,remove an element then show the length")
let c=-1;
let a=prompt("enter ur string ")
let b=prompt("enter character to be removed")
console.log("length of ur original string is " + a.length)

// function stringchange(kat){
//     console.log("i am running")
//     let m=0;
//     for(let i=0;i<kat.length;i++){
//         if(kat[i]===b){
//             m=i
//             kat[i]='0'
//         }
//         if(i>=m){
//             kat[i]=kat[i+1];
//         }
        
//         return kat;
//     }

// }


// let arr2=stringchange(a)

let m=0;
    for(let i=0;i<a.length;i++){
        if(a[i]===b){
            m=i
            a[i]='0'
        }
        if(i>=m){
            a[i]=a[i+1];
        }
    }

console.log("new name is " + a)

// for(let i=0;i<a.length;i++){
//     if(a[i]===b){
//         c=a.length-1;
//     }
// }
// console.log("new length is " + c);

// if(c===-1){
//     console.log('not found in array')
// }