var hs = require('../')

var strings = [
'<a href="#"> linky link </a>',
'							<p><strong>Somebody  around<br />',
'&Aacute; &Auml; =	Ä | &Auml	 = Ä| &Aringngstr&oumlm',
'&&&approx;',
]

for(var i in strings){
	console.log("'" + strings[i] + "' --> '" +hs.html_strip(strings[i]) + "'");
}

var estrings = [
'aaa<script>|}bql asdlad{|</script><style>css</style> some more text}',
'aaa<script></script><style></style>bbb'
]

for(var i in estrings){
	console.log("'" + estrings[i] + "' --> ,", hs.html_strip_with_hints(estrings[i],{compact_whitespace:true}));
}
