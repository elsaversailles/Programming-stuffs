<!DOCTYPE html>
<html lang="en"> 
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Activity</title>
	  <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
  <nav class="navbar fixed-top navbar-expand-lg navbar-light" id="navbarTop">
    <button class="navbar-toggler d-lg-block" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span class="navbar-toggler-icon"></span>
    </button>
    <a class="navbar-brand mx-auto" href="#" style="color: white; text-align: center;">
      <a href="#" id="prevLink"> <img src="resources/Pics/left-arrow.png" style="position: relative; top: 0; right: 0; width: 35px;">
      </a>
    </a> 
    <div class="collapse navbar-collapse" id="navbarNav">
      <ul class="navbar-nav flex-column" id="navBarItem">
      </ul>
    </div>  
  </nav>

<script>
$.getJSON("pageTitle.json", function(data) {
  var path = window.location.pathname;
  var page = path.split("/").pop();
  var title = data[page].title;
  var url = data[page].url;
  $("a.navbar-brand").text(title).attr("href", url);
});
</script>

<script>
$(function() {
$.getJSON('navbar.json', function(data) {
  var items = [];
  $.each(data, function(index, item) {
    items.push('<li class="nav-item"><a class="nav-link" href="' + item.url + '" id="navTopText">' + item.title + '</a></li>');
  });
  $('#navBarItem').append(items.join(''));
});
});
</script>

<script>
    //for navbar exit
    $(document).on('click', function(e) {
  if ($(e.target).is('#navbarNav.show') === false) {
    $('#navbarNav').collapse('hide');
  }
});
//for back button
var previousUrl = document.referrer;
// Set the href of the link to the previous URL
document.getElementById("prevLink").href = previousUrl;
</script>

	<nav class="navbar fixed-bottom navbar-light bg-primary" id="navbarBottom">
		<div class="container-fluid">
		  <ul class="nav d-flex justify-content-between" style="width: 100%;">
			<li class="nav-item" style="flex: 0 0 10%;">
				<a class="nav-link active" href="index.html">
					<img src="/resources/Pics/home.png" alt="Home" id="bottomIcon">
				</a>
			</li>
			<li class="nav-item" style="flex: 0 0 10%;">
				<a class="nav-link active" href="post.html">
					<img src="/resources/Pics/post.png" alt="Posts" id="bottomIcon">
				</a>
			</li>
			<li class="nav-item" style="flex: 0 0 10%;">
				<a class="nav-link active" href="gallery.html">
					<img src="/resources/Pics/gallery.png" alt="Gallery" id="bottomIcon">
				</a>
			</li>
		  </ul>
		</div>
	  </nav>





<div class="spacer_60px"></div>

<button onclick="toggleDiv()" type="button" class="btn btn-primary codeButton">View Source</button>
<div id="snippet" style="display:none">
    <script src="https://gist.github.com/elsaversailles/c6dc5e923a44e20771421d2ace5b37bf.js"></script>
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

	  <div class="footer_spacer"></div>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.14.7/dist/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
</body>
</html>