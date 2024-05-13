//{ Driver Code Starts

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split("\n").map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {

        let e = parseInt(readLine());

        let v = parseInt(readLine());

        let edges = [];
        for (let i = 0; i < e; i++) {
            let a = readLine().trim().split(' ').map((x) => parseFloat(x));
            edges.push(a);
        }

        let obj = new Solution();
        let res = obj.findNumberOfGoodComponent(e, v, edges);
        console.log(res);
    }
}

// } Driver Code Ends



class Solution {
    
    findNumberOfGoodComponent(e, v, edges) {
        
        let BFS = (node,adj,visit,S) =>{
          
            let deque = [];
            deque.push(node);
            visit.add(node)
            let size = 0;
            let bool = true;
            
            while (deque.length){
                
                let node = deque.shift();
                size++;
                if (S != adj[node].length) bool = false;
                
                for (let x = 0; x < adj[node].length; x++){
                    
                    let value = adj[node][x]
                      
                    if (!visit.has(value)){
                        deque.push(value);
                        visit.add(value);
                    }
                }
            } 
            
            return ((bool === true) && (size-1 === S))?1:0;
        }; 
                
        // Here, I Create Undirected Graph In Object    
        
        let adj = {};
        for (let i = 1; i <= v; i++) adj[i] = [];
        
        edges.forEach((elements)=>{
            let u = elements[0];
            let v = elements[1];
            adj[u].push(v);
            adj[v].push(u);
            
        });
        
        // Here, I Call BFS Functions and traverse each element and store it in visit
        // Set to avoiding the repeatation 
        
        let visit = new Set();
        
        let count = 0;
        
        for (let node = 1; node <= v; node++){
            
            if (!visit.has(node)){
                
                // # Here I call BFS Function
                count += BFS(node,adj,visit,adj[node].length); 
                
            }
        }
        
        return count;
        
    }
}

