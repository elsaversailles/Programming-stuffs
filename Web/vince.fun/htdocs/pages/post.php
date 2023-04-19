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
	  

<div class="container">
<div class="post-grid">
    <a href="https://vince.fun/pages/list.php" class="preview-box">
		<img src="/resources/Pics/markdownlogo.png" alt="Post preview image" id="post-preview">
		<p id="paragraph">Rendering tables and list using Markdown</p>
	  </a>	  
    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/cat.php" class="preview-box">
      <img src="/resources/Pics/cat.png" alt="Post preview image" id="post-preview">
      <p id="paragraph">Cats are one of the most popular pets in the world</p>
    </a>

    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/markdown.php" class="preview-box">
      <img src="/resources/Pics/tableLogo.png" alt="Post preview image" id="post-preview">
      <p id="paragraph">Markdown is a lightweight markup language that is commonly used to format plain text</p>
    </a>

    <div class="spacer_20px"></div>

    <a href="https://vince.fun/pages/plain.php" class="preview-box">
      <img src="/resources/Pics/webpage.png" alt="Post preview image" id="post-preview">
      <p id="paragraph">Plain HTML navigation page</p>
    </a>

  </div>
</div>


<div class="spacer_20px"></div>

<button onclick="toggleDiv()" type="button" class="btn btn-primary codeButton">View Source</button>
<div id="snippet" style="display:none">
    <script src="https://gist.github.com/elsaversailles/4d69f96e1bd43ae1fad0d5c2c06723a8.js"></script>
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