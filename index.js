var binding ;
try {
	binding = require('./build/Release/htmlstrip.node')
} catch(e){
	binding = require('./build/Debug/htmlstrip.node')
}


module.exports.html_strip = function(html,options){
	var input;
	if (typeof html == 'string'){
		input = Buffer.from(html,'utf-16le');
	} else if (html instanceof Buffer){
		input = html;
	} else {
		input = Buffer.from(html.toString(),'utf-16le');
	}

	var buf = binding.html_strip(input, input.length, options);
	return buf.toString('utf-16le',0,buf._charsWritten*2);
}

module.exports.html_strip_with_hints = function(html,options){
	var input;
	if (typeof html == 'string'){
		input = Buffer.from(html,'utf-16le');
	} else if (html instanceof Buffer){
		input = html;
	} else {
		input = Buffer.from(html.toString(),'utf-16le');
	}

	var buf = binding.html_strip(input, input.length, options);
	return {
		text: buf.toString('utf-16le',0,buf._charsWritten*2),
		hints: buf.tag_hints
	};
}

module.exports.html_entities_decode = function(html){
	var input;
	if (typeof html == 'string'){
		input = Buffer.from(html,'utf-16le');
	} else if (html instanceof Buffer){
		input = html;
	} else {
		input = Buffer.from(html.toString(),'utf-16le');
	}

	var buf = binding.html_entities_decode(input, input.length);
	return buf.toString('utf-16le',0,buf._charsWritten*2);
}

module.exports.accented_chars_norm = function(html){
	var input;
	if (typeof html == 'string'){
		input = Buffer.from(html,'utf-16le');
	} else if (html instanceof Buffer){
		input = html;
	} else {
		input = Buffer.from(html.toString(),'utf-16le');
	}

	var buf = binding.accented_chars_norm(input, input.length);
	return buf.toString('utf-16le',0,buf._charsWritten*2);
}

module.exports.accented_chars_strip = function(html){
	var input;
	if (typeof html == 'string'){
		input = Buffer.from(html,'utf-16le');
	} else if (html instanceof Buffer){
		input = html;
	} else {
		input = Buffer.from(html.toString(),'utf-16le');
	}

	var buf = binding.accented_chars_strip(input, input.length);
	return buf.toString('utf-16le',0,buf._charsWritten*2);
}
