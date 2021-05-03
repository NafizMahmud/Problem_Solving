/*
[[1, 5, [2, 3]], [2, 3, [4]], [3, 3, []], [4, 3, []]], 1

    public int id; 1,
    public int importance; 5,
    public List<Integer> subordinates; [2, 3]

*/


/**
 * @param {Employee[]} employees
 * @param {number} id
 * @return {number}
 */

var employees_data = [[1, 5, [2, 3]], [2, 3, [4]], [3, 3, []], [4, 3, []]];
var id_data = 1;


var GetImportance = function (employees, id) {
    let emp = new Map();
    for (i = 0; i < employees.length; i++) {
        emp[employees_data[i][0]] = employees_data[i][1];
        if(id === employees_data[i][0]) {target = employees_data[i];}

    }
    console.log(target);
    GetImportanceHelper(target, 0);

};

function GetImportanceHelper(employee, importance) {

    importance = importance + employee.importance;

    if (employee.subordinates) {

    }
    //  [2, 3, [4]] = objedtt
}


GetImportance(employees_data, id_data);