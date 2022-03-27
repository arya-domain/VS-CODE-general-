const us = 0;
const cs = 0;
const us_span = document.getElementById("user-score");
const cs_span = document.getElementById("computer-score");
const  sb_div = document.querySelector(".score-board");
const res_div = document.querySelector(".result");
const r_div = document.getElementById("r");
const p_div = document.getElementById("p");
const s_div = document.getElementById("s");

function get_comp_choice()
{
    const choice = ['r', 'p', 's'];
    const rand_no = parseInt(Math.random()*3)
    return choice[rand_no];
    
}
console.log(get_comp_choice());
