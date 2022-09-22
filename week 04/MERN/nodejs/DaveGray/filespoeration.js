const fs = require('fs');
const { threadId } = require('worker_threads');

fs.readFile(`${__dirname}/files/hello.txt`, 'utf-8', (err, data) => {
  if (err)
    throw err;
  console.log(data);
});