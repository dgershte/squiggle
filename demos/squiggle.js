var eps = 50;
var globalfaces = new Array();
var globali=0;
var charpos=1;
var lastpos=0;
var seen = new Array();
var squares = new Array();

function ssquare(p0,p1,p2,p3){
    this.p0=p0;
    this.p1=p1;
    this.p2=p2;
    this.p3=p3;
}

function point(x,y){
    this.x=x;
    this.y=y;
}

function sidesTouch(square1,square2){
    var p0= square1.p0;
    var p1= square1.p1;
    var p2= square1.p2;
    var p3= square1.p3;
    var z0 = square2.p0;
    var z1 = square2.p1;
    var z2 = square2.p2;
    var z3 = square2.p3;

    if(checkSide(p0,p1,z0,z1)){
        return new point(0,0);
    }
    if(checkSide(p1,p2,z0,z1)){
        return new point(1,0);
    }
    if(checkSide(p2,p3,z0,z1)){
        return new point(2,0);
    }
    if(checkSide(p3,p0,z0,z1)){
        return new point(3,0);;
    }
    if(checkSide(p0,p1,z1,z2)){
        return new point(0,1);
    }
    if(checkSide(p1,p2,z1,z2)){
        return new point(1,1);
    }
    if(checkSide(p2,p3,z1,z2)){
        return new point(2,1);
    }
    if(checkSide(p3,p0,z1,z2)){
        return new point(3,1);
    }
    if(checkSide(p0,p1,z2,z3)){
        return new point(0,2);
    }
    if(checkSide(p1,p2,z2,z3)){
        return new point(1,2);
    }
    if(checkSide(p2,p3,z2,z3)){
        return new point(2,2);
    }
    if(checkSide(p3,p0,z2,z3)){
        return new point(3,2);
    }
    if(checkSide(p0,p1,z3,z0)){
        return new point(0,3);
    }
    if(checkSide(p1,p2,z3,z0)){
        return new point(1,3);
    }
    if(checkSide(p2,p3,z3,z0)){
        return new point(2,3);
    }
    if(checkSide(p3,p0,z3,z0)){
        return new point(3,3);
    }
    return 0;
}

function checkSide(p0,p1,z0,z1){
    return comparePoints(p0,z1) && comparePoints(p1,z0);
}
function comparePoints(p0,p1){
    var xd=p0.x-p1.x;
    var yd=p0.y-p1.y;
    var d = xd*xd+yd*yd;
    if(d<eps){
        return true;
    }
}

function connected(i,j){
    if(!exists(i) || !exists(j)){
        return false;
    }
    var touch = sidesTouch(squares[i],squares[j]);
    if(touch==0){
        return false;
    }
    //we know rotations here but ignore for now
    return true;
}

function canTraverse(face0,face1){
    return true;
}

function exists(i){
    return seen[i]==true;
}

function updateChar(){
    var i =charpos;
    for(var j=0;j<globalfaces.length;j++){
        if(charpos!=j){
           if(connected(i,j) && canTraverse(i,j)){
               if(lastpos!=j){
                lastpos=i;
                charpos=j;
               }
           }
        }
    }
}

function face(id){
    this.id=id;
}

function addfaces(){
    var i=0;
    while(i<24){
        globalfaces.push(i);
        i++;
    }
}
addfaces();
