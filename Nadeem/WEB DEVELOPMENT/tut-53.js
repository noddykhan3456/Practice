function greater( a , b ,c) {
    if(a>b && a>c) {
        // console.log(a+" is greater");
        return a;
    }
    else if (b>c) {
        // console.log(b+" is greater");
        return b;
    }
    else {
        // console.log(c+" is greater");
        return c;
    }
}

let a = 2;
let b = 4;
let c = 6;
let check = greater(a,b,c); 
console.log(check + " is greater");