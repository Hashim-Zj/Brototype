const fs = require('fs');
const http = require('http');
const url = require('url');


const data = fs.readFileSync(`text.json`, 'utf-8');
const userData = JSON.parse(data);


const server = http.createServer((req, res) => {
  const pathName = req.url;
  if (pathName === '/' || pathName === '/hashim') {
    res.end('Hello This in to sersver!!! \n This in Hashim:-');
  } else if (pathName === '/product') {
    res.end('This in product')
  } else if (pathName === '/api') {

    // fs.readFile(`text.json`, 'utf-8', (err, data) => {
    //   const userData = JSON.parse(data);
    //   res.writeHead(200, {
    //     'Contant-type': 'application/json'
    //   });
    //   console.log(data);
    //   console.log(userData);
    //   res.end(`API...\n ${data} \n ${userData}`)
    // })

    res.writeHead(200, {
      'Contant-type': 'application/json'
    });
    res.end(data);
    console.log(data);
  } else {
    res.writeHead(404, {
      'Content-type': 'text.html',
      'my-own-header': 'hello-world'
    });
    res.end('<h1>Page Not Found!</h1>');
  }

});
server.listen(2022, '127.0.0.1', () => {
  console.log('lisening to requests from port 2022');
});