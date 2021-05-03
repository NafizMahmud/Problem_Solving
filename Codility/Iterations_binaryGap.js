function binaryGap(decimal) {
  let positionsOf1 = [];
  let binary = (decimal >>> 0).toString(2);
  for (let i = 0; i < binary.length; i++) {
    if (binary[i] === "1") {
      positionsOf1.push(i);
    }
  }
  //   console.log(positionsOf1);
  if (positionsOf1.length > 1) {
    diffrenceArr = [];
    for (let i = 0; i < positionsOf1.length - 1; i++) {
      diffrenceArr.push(positionsOf1[i + 1] - positionsOf1[i]);
    }
    // console.log(diffrenceArr);
    return Math.max(...diffrenceArr) - 1;
  } else {
    return 0;
  }
}
// console.log(binaryGap(20));
