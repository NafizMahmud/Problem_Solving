/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} x
 * @param {number} y
 * @return {boolean}
 */
let xParent, yParent;
let xDepth, yDepth;

var isCousins = function (root, x, y) {
    isCousinsHelper(root, x, y, 0, null);
    let parentsame = xParent === yParent;
    let depthSame = xDepth === yDepth;
    return depthSame && parentsame;
};


function isCousinsHelper(root, x, y, depth, parent) {

    if (!root) return;

    else if (root.val === x) {
        xParent = root;
        xDepth = depth;
    }
    else if (root.val === y) {
        yParent = root;
        yDepth = depth;
    }
    else {
        isCousinsHelper(root.left, x, y, depth++, root);
        isCousinsHelper(root.right, x, y, depth++, root);
    }
}
/*
[1,2,11,15,4,6,9,81,5,7,66,77]



*/
