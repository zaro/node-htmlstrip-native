var hs = require('../')

var strings = {
	'<a data-sign=greeting> Hello</a>' :  "greeting Hello ",
	"<a data-sign='<\">\"='> Hello</a>" :  "<\">\"= Hello ",
	'<a another-data-sign=">"> Hello</a>' :  "Hello ",
	"<a another-data-sign='<\">\"='> Hello</a>" :  "Hello "
};

console.log("TEST attribute values")
for(var i in strings){
  var converted = hs.html_strip(i, { compact_whitespace: true, include_attributes:{'data-sign':true}});
  var result = (strings[i] == converted);
  //console.log("done .......");
  if(!result){
    console.log(
      "'" + i + "' : '" + strings[i] + "' ? " +
      "'" + strings[i] + "' == '" + converted + "' -> '" +
      result + "'"
    );

    console.log('FAIL!');
    process.exit(-1);
  }
}
console.log('OK');
