const airports='PHX BHK OKC JFK LAX MEX EZE HEL LOS LIM'.split(' ');
const routes=[
['PHX','LAX'],
['PHX','JFK'],
['JFK','OKC'],
['JFK','HEL'],
['JFK','LOS'],
['MEX','LAX'],
['MEX','BKK'],
['MEX','LIM'],
['LIM','BKK'],
];
const adjacencyList=new Map();

