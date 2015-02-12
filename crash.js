var
    request = require("request"),
    iconv = require('iconv-lite'),
    html_strip = require('./');

request({
    uri: "http://8GOOD.RU/",
    method: "GET",
    timeout: 10000,
    followRedirect: false,
    encoding: null,
    maxRedirects: 1,
    headers: {
        'User-Agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.95 Safari/537.36'
    }
}, function(err, res, htmlBuffer) {
    console.log(err);
    //console.log(res);
	  console.log("=====");
    //console.log(htmlBuffer.toString());
    console.log(htmlBuffer.length)

    var decoded = iconv.decode(htmlBuffer, 'utf-8');
    console.log(decoded);

    var string = html_strip.html_strip(decoded , {
        include_script : false,
        include_style : false,
        compact_whitespace : true
    });

    //console.log(string)
    console.log("Done");
})
