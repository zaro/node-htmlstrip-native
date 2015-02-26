var hs = require('../')

var strings = {
  'string \t\t\twith   \n\nws' : 'string with ws',
  '  on one space <a href="#">    here' : 'on one space here',
  '\n\t\n\t\t\t\t\n   \n \n' : '', // Whitesapce only string compacts to an empty string
  'White space in attr <img src="some_url" alt="This      should \t\t\tnormalized ws">!' : "White space in attr This should normalized ws !",

};

console.log("TEST tag stripping with whitespace compacting")
for(var i in strings){
  var converted = hs.html_strip(i, {compact_whitespace: true, include_attributes:{'alt':true}});
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
}
console.log('OK');
