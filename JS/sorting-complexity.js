function runSortingAlgorithm(algo, arr) {
    var start = Date.now();
 
    for (var i = 0; i < 100000000;i++);

    if (algo == "bubbleSort") {
        bubbleSort(arr);
    }
    if (algo == "mergeSort") {
        mergeSort(arr);
    }
    /*if (algo == "quickSort") {
        quickSort(arr);
    }*/
    if (algo == "insertionSort") {
        insertionSort(arr);
    }
    
    var end = Date.now();
    console.log(`\nAlgorithm: ${algo} \nExecution time: ${end - start} ms`);
}

function bubbleSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                const lesser = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = lesser;
            }
        }
    }

    return arr;
}

function merge(left, right) {
    let sortedArr = [] // the sorted items will go here
    while (left.length && right.length) {
        // Insert the smallest item into sortedArr
        if (left[0] < right[0]) {
            sortedArr.push(left.shift())
        } else {
            sortedArr.push(right.shift())
        }
    }
    // Use spread operators to create a new array, combining the three arrays
    return [...sortedArr, ...left, ...right]
}

function mergeSort(arr) {
    if (arr.length <= 1) return arr

    let mid = Math.floor(arr.length / 2)

    let left = mergeSort(arr.slice(0, mid))
    let right = mergeSort(arr.slice(mid))

    return merge(left, right)
}
/*
function quickSort(arr) {
    if (arr.length <= 1) {
      return arr;
    }
  
    const pivot = arr[arr.length - 1];
    const left = [];
    const right = [];
  
    for (let i=0; i < arr.length-1;i++) {
        arr[i] < pivot ? left.push(arr[i]) :  right.push(arr[i])
    }
    newArray = [];
    arr = newArray.concat(quickSort(left), pivot, quickSort(right));
  
    return arr;
}*/

function insertionSort(arr) {
    const len = arr.length;

    for (let i = 0; i < len; i++) {
        let key = arr[i];
        let j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    return arr;
}

const ARRAY = Array.from({length: 10000}, () => Math.floor(Math.random() * 10000));

runSortingAlgorithm("bubbleSort", ARRAY);
runSortingAlgorithm("mergeSort", ARRAY);
//runSortingAlgorithm("quickSort", ARRAY);
runSortingAlgorithm("insertionSort", ARRAY);
