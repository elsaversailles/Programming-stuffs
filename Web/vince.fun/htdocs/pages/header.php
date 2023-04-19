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
  <nav class="navbar fixed-top navbar-expand-lg navbar-light" id="navbarTop">
    <button class="navbar-toggler d-lg-block" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span class="navbar-toggler-icon"></span>
    </button>
    <a class="navbar-brand mx-auto" href="#" style="color: white; text-align: center;">
      <a href="#" id="prevLink"> <img src="/resources/Pics/left-arrow.png" style="position: relative; top: 0; right: 0; width: 35px;">
      </a>
    </a> 
    <div class="collapse navbar-collapse" id="navbarNav">
      <ul class="navbar-nav flex-column" id="navBarItem">
      </ul>
    </div>  
  </nav>

<script>
$.getJSON("/pageTitle.json", function(data) {
  var path = window.location.pathname;
  var page = path.split("/").pop();
  var title = data[page].title;
  var url = data[page].url;
  $("a.navbar-brand").text(title).attr("href", url);
});
</script>

<script>
$(function() {
$.getJSON('/navbar.json', function(data) {
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

<div class="spacer_60px"></div>