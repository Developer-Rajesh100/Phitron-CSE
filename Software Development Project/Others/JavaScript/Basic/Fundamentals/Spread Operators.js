// Spread Operators
const arr1 = [1, 2, 3, 4, 5]
const arr2 = [6, 7, 8, 9, 10]
const obj = {id: 1, studentId: 'ECMT-23-008', department: 'BCA'}

const finallArr = [...arr1, ...arr2]

// console.log(finallArr)

const {...newObj} = obj
console.log(newObj)