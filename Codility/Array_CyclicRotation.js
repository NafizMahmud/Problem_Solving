let A = [1, 2, 3, 4];


let K = 6;

for (let i = 0; i < K; i++) {
    A.unshift(A.pop());
}

console.log(A);