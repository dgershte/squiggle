
$(document).ready(function() {

	var canvas = new fabric.Canvas('c');
    canvas.freeDrawingBrush.width = 10;
    canvas.freeDrawingBrush.color = '#000';
    canvas.isDrawingMode = true;
    canvas.width = document.documentElement.clientWidth;
    canvas.height = document.documentElement.clientHeight;
        
    canvas.on("after:render", function() {canvas.calcOffset();});	
	
});

