var fs = require('fs');
var spawn = require('child_process').spawn;

var entitiesFiles = ['entities/xml.json', 'entities/html4.json', 'entities/html5.json']
var entities = {};
for(var i in entitiesFiles){
	var o = JSON.parse(fs.readFileSync(entitiesFiles[i]).toString());
	for(var i in o){
		entities[i] = o[i];
	}
	
}

var gperfFile = [
'struct entity { const char *name; const uint16_t code;};',
'%readonly-tables',
'%language=C++',
'%define lookup-function-name lookup_entity',
'%define class-name EntityLookup',
'%define initializer-suffix ,0',
'%%',
];

for(var i in entities){
	gperfFile.push(i+','+entities[i].charCodeAt(0));
}

gperfFile = gperfFile.join('\n');

console.log(gperfFile);

var gperf  = spawn('gperf', ['-t','--output-file','entities.hpp']);

gperf.stdin.write(gperfFile);
gperf.stdin.end();