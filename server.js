const http = require('http')
var express = require('express');
var bodyParser = require('body-parser')
var app = express();
var fs = require("fs");
app.use(bodyParser.urlencoded({ extended: false }));
app.use(bodyParser.json());
var host = "0.0.0.0"
var port = 443


app.get('/passwords', function (req, res) {
  console.log('getting passwords')
  fs.readFile( __dirname + "/" + "passwords.json", 'utf8', function (err, data) {
     console.log(data);
     res.end(data);
  });
})

app.post('/givepass', function (req, res) {
  console.log('taking passwords')
  console.log(req.body);
  res.end("Thanks for passses\n")
}

)

var server = app.listen(port, host, function () {
  console.log("Example app listening at http://%s:%s", host, port)
})