const arr = [9, 3, 6, 1, 5, 2, 8, 4, 7, 20, 17, 19, 18, 16, 15, 14, 13, 12, 11, 10];

const arrSort = (arr) => {
  for(let i = 0; i < arr.length; i++) {
    for(let j = 0; j < arr.length; j++) {
      if(arr[j] > arr[j + 1]) {
        const temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

const result = arrSort(arr);
console.log(arr);