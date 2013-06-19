var binding ;
try {
	binding = require('./build/Release/htmlstrip.node')
} catch(e){
	binding = require('./build/Debug/htmlstrip.node')
}


module.exports.html_strip = function(html,options){
	if (typeof html == 'string'){
		html = new Buffer(html,'utf-16le');
	}
	
	var buf = binding.html_strip(html, html.length, options);
	return buf.toString('utf-16le',0,buf._charsWritten*2);
}
