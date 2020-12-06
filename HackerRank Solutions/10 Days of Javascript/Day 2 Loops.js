'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
const vowel = ["a", "e", "i", "o", "u"];
function vowelsAndConsonants(s) {
    let vowelArray = [];
    let consonantArray = [];
    for(let i=0; i<s.length; i++){
        if(vowel.indexOf(s[i]) > -1){
            vowelArray.push(s[i]);
        } else{
            consonantArray.push(s[i]);
        }
    }
    for(let i=0; i<vowelArray.length; i++){
        console.log(vowelArray[i]);
    }
    for(let i=0; i<consonantArray.length; i++){
        console.log(consonantArray[i]);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}