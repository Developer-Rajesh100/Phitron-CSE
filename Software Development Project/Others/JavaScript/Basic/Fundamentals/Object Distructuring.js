const user = {
    name: 'Rajesh Mondal',
    age: 21,
    isMail: true,
    friends: ['Rakib', 'Batman', 'Tornov', 'Ritam']
}

console.log(user.name, user.age, user.isMail, user.friends)

const {name, age, isMail, friends} = user
console.log(name, age, isMail, friends)

const {name: newName, age:newAge} = user
console.log(newName, newAge)