var hs = require('../')
var html1 = '<style>b {color: red;}</style>' +
	' Yey, <b> No more, tags&amp;</b>' +
	'<img source="1.png" alt="smiley">' ;

var strings = {

};
strings[("" + html1)] = 'Yey, No more, tags& smiley ';

console.log("TEST attribute values 2")
for(var i in strings){
  var converted = hs.html_strip(i, {  include_script : false, include_style : false,
										compact_whitespace: true, include_attributes:{'alt':true}
									});
  var result = (strings[i] == converted);
  if(!result){
    console.log(
      "'" + i + "' : '" + strings[i] + "' ? " +
      "'" + strings[i] + "' == '" + converted + "' -> '" +
      result + "'"
    );
   	console.log('FAIL!');
     process.exit(-1);
  }

	converted = hs.html_strip(i, {  include_script : false, include_style : false,
										compact_whitespace: true, include_attributes:{'alt':false}
									});
  result = (strings[i] != converted);
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
