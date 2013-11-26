var readline = require('readline');
var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

var path_counts = {};

rl.on('line', function(line) {
  if (path_counts[line] === undefined) {
    path_counts[line] = 0;
  }

  path_counts[line] += 1;
});


rl.on('close', function() {
  var ordered = [];
  for (var path in path_counts) {
    ordered.push([path, path_counts[path]]);
  }
  ordered.sort(function(a, b) { return b[1] - a[1]; });

  for (var i = 0; i < 10; i++) {
    console.log(ordered[i]);
  }
});

