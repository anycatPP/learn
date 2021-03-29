var http=require('http')
http.createServer(function(req,res){
res.writehead(200,{'Content-Type':'text/plain'});
res.end('Hello world');
}).listen(8080);

