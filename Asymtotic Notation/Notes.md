- What is a good code?
1. Readable
2. Scalable

- Calculating the time complexity of a program

1. function funChallenge(input){
    let a = 10;  - O(1)
    a = 50 + 3;  - O(1)

    
    for(let i = 0; i < input.length; i++){  - O(n)
        anotherFunction();  - O(n)
        let stranger = true;  - O(n)
        a++;  - O(n)
    }
    return a;  - O(1)
}

total = O(3 + 4n) called as Big Oh of 3+4n.



2. function anotherFunChallenge(input){
    let a = 5;  - O(1)
    let b = 10;  - O(1)
    let c = 50;  - O(1)
    for(let i = 0; i < input; i++){
        let x = i + 1;  - O(n)
        let y = i + 2;  - O(n)
        let z = i + 3;  - O(n)
    }
    for(let j = 0; j < input; j++){
        let p = j * 2;  - O(n)
        let q = j * 2;  - O(n)
    }
    let whoAmI = "I don't know";  - O(1)
}

total = O(4+5n) called as Big Oh of 4+5n.

# Rule book for the big O
- Worst Case.
- Remove constants.
- Different terms for inputs.
- Drop non dominants.

3. function printFirstThenFirstHalfThenSayHi100Times(items)[
    console.log(items[0]);  -O(1)

    var middleIndex = Math.floor(items.length / 2);  -O(1)
    var index = 0;  -O(1)

    while(index < middleIndex){
        console.log(items[index]);  -O(n/2)
        index++;  -O(n/2)
    }

    for(var i = 0; i < 100; i++){
        console.log("hi");  -O(100)
    }
]

total(by following the above rule)= O(n/2) -> O(n)

4. function compressBoxTwice(boxes, boxes2){
    boxes.forEach(function(boxes){
        console.log(boxes);
    });

    boxes2.forEach(function(boxes){
        console.log(boxes2)
    });
}

time complexity = O(a + b)  // Cause here there are two different inputs.