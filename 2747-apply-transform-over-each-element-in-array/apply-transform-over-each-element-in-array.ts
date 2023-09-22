function map(arr: number[], fn: (n: number, i: number) => number): number[] {
    const newArray : number[] = [];
    const n = arr.length;
    for(let i=0;i<n;i++) {
        newArray[i] = fn(arr[i],i);
    }
    return newArray;
};