var hs = require('../')

function getRandomChar() {
  var s=  String.fromCharCode( Math.floor(Math.random() * (127 - 32)) + 32 );
  return s;
}

function generateTestString(length) {
  var str="", exp="", inTag=false, inTagNext=false, inAttrVal=false, prev;
  while(length) {
    var c = getRandomChar();
    var e = c;
    if(c == '&'){
      c += 'amp;';
      e = '&';
    }
    if( c == '=') {
			// don't generate attirbute values for now
      if(inTag) continue;
    }
    if( c == '<') {
      if(inTag) continue;
      inTagNext= true;
      e = ' ';
    }
    if( c == '>') {
      inTagNext = false;
      e = undefined;
    }
    str += c;
    if(!inTag && e) {
      exp += e;
    }
    inTag = inTagNext;
		prev = c;
    length--;
  }
  return { str: str, exp: exp };
}


console.log("TEST random tag stripping")
for(var i=0; i < 100000; ++i){
  var t = generateTestString(100);
  var converted = hs.html_strip(t.str);
  var result = (t.exp == converted);
  if(!result){
    console.log(
      "ORIG> ❮" + t.str + "❯\n" +
      "EXP > ❮" + t.exp + "❯\n" +
      "CONV> ❮" + converted + "❯\n" +
      "RES > "  + result
    );

    console.log('FAIL!');
    process.exit(-1);
  }
}
console.log('OK');
