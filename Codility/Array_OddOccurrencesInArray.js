let A = [9, 3, 9, 3, 9, 7, 9];
function solution(A) {
    let B = [];
    let i = 0;
    while (i < A.length) {
        B[A[i]] ? B[A[i]]++ : B[A[i]] = 1
        i++;
    }
    i = 0;
    while (i < B.length) {
        if (typeof B[i] == 'undefined') { }
        else {
            if (B[i] % 2 == 0) { }
            else { return i; }
        }
        i++;
    }
}
console.log(solution(A));
