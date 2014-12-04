var hs = require('../')

var strings = [
'<a href="#"> linky link </a>',
'							<p><strong>Somebody  around<br />',
'&Aacute; &Auml; =	Ä | &Auml	 = Ä| &Aringngstr&oumlm',
'&&&approx;',
'Begin <img src="some_url" alt="This should be \'in\' the output"> End',
'Begin <img src="some_url" alt=OnlyThis should be in the output> End',
"Begin <img src=\"some_url\" alt='single\"_\"quoted'> End"
]

for(var i in strings){
	console.log("'" + strings[i] + "' --> '" +hs.html_strip(strings[i], {include_attributes:{alt:true}}) + "'");
}

s = 'All attr of <img src    =    "http://something" alt="Text &amp;"'
console.log("'" + s + "'--> '" +hs.html_strip(s, {include_attributes:{'*':true}}) + "'");

var estrings = [
'aaa<script>|}bql asdlad{|</script><style>css</style> some more text}',
'aaa<script></script><style></style>bbb',
'aaa<script></script><style></style>bbb<img alt="ccc">ddd'
]

for(var i in estrings){
	console.log("'" + estrings[i] + "' --> ,", hs.html_strip_with_hints(estrings[i],{compact_whitespace:true,include_attributes:{alt:true}}));
}
