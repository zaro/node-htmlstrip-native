var hs = require('../')

opts = require('url').parse(process.argv[2]);
var b = '';
req = require('http').request(opts , function(res){
  res.on('data', function (chunk) {
		b += chunk.toString();
  });
  res.on('end', function (chunk) {
		console.log(hs.html_strip_with_hints(b));
  });
});

req.on('error', function(e) {
  console.log('problem with request: ' + e.message);
});

req.end();