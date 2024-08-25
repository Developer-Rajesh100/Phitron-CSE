var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

for(let i = 0; i < numbers.length - 1; i++) {
    for(let j = i + 1; j < numbers.length; j++) {
        if(numbers[i] === numbers[j]) {
            numbers.splice(j, 1);
        }
    }
}

console.log(numbers);