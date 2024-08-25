var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

let biggestName = friends[0];

for(let i = 1; i < friends.length; i++) {
    if(friends[i].length > biggestName.length) {
        biggestName = friends[i];
    }
}

console.log(biggestName);