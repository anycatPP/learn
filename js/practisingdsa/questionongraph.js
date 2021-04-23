const airports='PHX BKK OKC JFK LAX MEX EZE HEL LOL LAP LIM'.split(' ');
const routes=[
                ['PHX','LAX'],
                ['PHX','JFK'],
                ['JFK','OKC'],
                ['JFK','HEL'],
                ['JFK','LOS'],
                ['MEX','LAX'],
                ['MEX','BKK'],
                ['MEX','LIM'],
                ['MEX','EZE'],
                ['LIM','BKK'],
                ];

const adjacencyList=new Map();
function addNode(airport)
{
adjacencyList.set(airport,[]);
}

