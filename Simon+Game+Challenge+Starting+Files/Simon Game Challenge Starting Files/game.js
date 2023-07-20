var buttonColours = ["red", "blue", "green", "yellow"];
var userClickedPattern=[];
var gamePattern = [];
var started=false;
var level=0;
$(document).keypress(function() {
  if (!started) {

   
    $("#level-title").text("Level " + level);
    nextSequence();
    started = true;
  }
});
function checkans(currentLevel){
  if(gamePattern[currentLevel]===userClickedPattern[currentLevel]){
    if(userClickedPattern.length===gamePattern.length){
      setTimeout(function() {
        nextSequence();
      }, 1000);
    }
  }else{
    playaudio("wrong");
    $("body").addClass("game-over");
    $("#level-tittle").text("game over,press any key");
    setTimeout(function () {
      $("body").removeClass("game-over");
    }, 200);

    startOver();
  }
}

$(".btn").click(function(){
    var userchoise=$(this).attr("id");
    
    userClickedPattern.push(userchoise);
    playaudio(userchoise);
    press(userchoise);
    checkans(userClickedPattern.length-1);
})
function nextSequence() {
  userClickedPattern=[];
  level++;
  $("#level-tittle").text("level"+level);

  var randomNumber = Math.floor(Math.random() * 4);
  var randomChosenColour = buttonColours[randomNumber];
  gamePattern.push(randomChosenColour);

  
  $("#" + randomChosenColour).fadeIn(100).fadeOut(100).fadeIn(100);

 
  
  playaudio(randomChosenColour);

}
function playaudio(name){
    var audio = new Audio("sounds/" + name + ".mp3");
  audio.play();

}
function press(currentcol){
    $("#" + currentcol).addClass("pressed");
    setTimeout(function(){
        $("#" + currentcol).removeClass("pressed");
    },100);

}
function started(){
  level=0;
  gamePattern=[];
  started=false;
}
