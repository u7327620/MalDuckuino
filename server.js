const http = require('http')
var express = require('express');
var app = express();
var fs = require("fs");


app.get('/passwords', function (req, res) {
  console.log('getting passwords')
  fs.readFile( __dirname + "/" + "passwords.json", 'utf8', function (err, data) {
     console.log(data);
     res.end(data);
  });
})

var server = app.listen(443, function () {
  var host = "127.0.0.1"
  var port = 443
  console.log("Example app listening at http://%s:%s", host, port)
})