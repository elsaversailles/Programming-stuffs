<!DOCTYPE html>
<html lang="en"> 
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Activity</title>
	<script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
	<link rel="stylesheet" type="text/css" href="/style.css">
</head>

<body>
<?php include('header.php'); ?>
	  
<div class="spacer_60px"></div>

<!-- Images -->

<div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev1.jpg" alt="Image 1">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev1.jpg" alt="Image 1">
	  <span class="close-button">&times;</span>
	</div>
  </div>
  <div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev2.jpg" alt="Image 2">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev2.jpg" alt="Image 2">
	  <span class="close-button">&times;</span>
	</div>
  </div>
  <div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev3.jpg" alt="Image 3">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev3.jpg" alt="Image 3">
	  <span class="close-button">&times;</span>
	</div>
  </div>
  <div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev4.jpg" alt="Image 4">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev4.jpg" alt="Image 4">
	  <span class="close-button">&times;</span>
	</div>
  </div>

  <div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev6.jpg" alt="Image 6">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev6.jpg" alt="Image 6">
	  <span class="close-button">&times;</span>
	</div>
  </div>
  <div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev7.jpg" alt="Image 7">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev7.jpg" alt="Image 7">
	  <span class="close-button">&times;</span>
	</div>
  </div>
  <div class="image-container">
	<img class="thumbnail" src="/resources/Pics/ev8.jpg" alt="Image 8">
	<div class="enlarged-image">
	  <img class="enlarged-thumbnail" src="/resources/Pics/ev8.jpg" alt="Image 8">
	  <span class="close-button">&times;</span>
	</div>
  </div>
  
  <script>
/* Script for enlarging images on click */
var images = document.querySelectorAll('.thumbnail');
for (var i = 0; i < images.length; i++) {
  images[i].addEventListener('click', function() {
    var enlargedImage = this.nextElementSibling;
    enlargedImage.style.display = 'flex';
    enlargedImage.firstElementChild.style.width = '600px';
    enlargedImage.firstElementChild.style.height = '400px';

    // add an event listener to the enlarged image itself to hide it when clicked
    enlargedImage.addEventListener('click', function() {
      enlargedImage.style.display = 'none';
    });
  });
}



  </script>

<div class="spacer_20px"></div>

<button onclick="toggleDiv()" type="button" class="btn btn-primary codeButton">View Source</button>
<div id="snippet" style="display:none">
    <script src="https://gist.github.com/elsaversailles/0cdda66e7b3067082b0cd1e5835c620e.js"></script>
</div>

<script>
    function toggleDiv() {
  var div = document.getElementById("snippet");
  if (div.style.display === "none") {
    div.style.display = "block";
  } else {
    div.style.display = "none";
  }
}
</script>

<?php include('footer.php'); ?>
</body>
</html>