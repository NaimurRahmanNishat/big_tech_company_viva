function bubbleSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

// Example usage:
let numbers = parseInt (prompt("Enter numbers separated by commas:"));
numbers = numbers.split(',').map(Number);

console.log("Unsorted array:", numbers);

let sortedArray = bubbleSort(numbers);
console.log("Sorted array:", sortedArray);
