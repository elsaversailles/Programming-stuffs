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
    <h2 class="paragraph" style="padding: 10px; color: white">This page serves as the directory for plain HTML projects for intermediate programming </h2>
    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/html/index.html" class="preview-box">
      <img src="/resources/Pics/mypic.jpg" alt="Post preview image" id="post-preview">
      <p id="paragraph">About me</p>
    </a>
    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/html/gallery.html?i=1" class="preview-box">
      <img src="/resources/Pics/gallery.png" alt="Post preview image" id="post-preview">
      <p id="paragraph">Gallery</p>
    </a>
    
    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/html/list.html" class="preview-box">
      <img src="/resources/Pics/tableLogo.png" alt="Post preview image" id="post-preview">
      <p id="paragraph">Lists & Tables</p>
    </a>
    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/html/frameset.html" class="preview-box">
      <img src="/resources/Pics/frame.png" alt="Post preview image" id="post-preview">
      <p id="paragraph">Frameset</p>
    </a>

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

<?php include('footer.php'); ?>
    <script src="https://cdn.jsdelivr.net/npm/popper.js@1.14.7/dist/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
</body>
</html>