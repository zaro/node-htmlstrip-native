var hs = require('../')

var strings = {
  '<a href="#"> linky link </a>' : '  linky link  ',
  '&Aacute; &Auml; =	Ä | &Auml	 = Ä| &Aringngstr&oumlm': 'Á Ä =	Ä | Ä	 = Ä| Ångström',
  '&&&approx;' : '&&≈',
  'Begin <img src="some_url" alt="This should be \'in\' the output"> End' : "Begin  This should be 'in' the output  End",
  'Begin <img src="some_url" alt=OnlyThis should be in the output> End': 'Begin  OnlyThis  End',
  "Begin <img src=\"some_url\" alt='single\"_\"quoted'> End": 'Begin  single"_"quoted  End',
  "Begin <img src=\"some_url\" alt='single> End" :'Begin  single End'
};

console.log("TEST tag stripping")
for(var i in strings){
  var converted = hs.html_strip(i, {include_attributes:{'alt':true}});
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
