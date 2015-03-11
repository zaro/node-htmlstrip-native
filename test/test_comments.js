var hs = require('../')

var strings = {
  '<!-- --> Hello' : 'Hello',
	'<!-- <script> alert(); </script> --> Hello' : 'Hello',
};

console.log("TEST html comments stripping")
for(var i in strings){
  var converted = hs.html_strip(i, { include_script: false, include_style: false, compact_whitespace: true });
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
