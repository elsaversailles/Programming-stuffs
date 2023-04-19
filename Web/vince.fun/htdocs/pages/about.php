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
<?php include('header.php'); ?>
	  <p class="paragraph" style="padding: 10px; color: white"> This website serves as the personal portfolio and testing platform for Vince, an individual passionate about programming and technology. The website's domain name, vince.fun, is a nod to the website's primary goal of showcasing the activities and projects Vince has completed in programming and other related fields. One of the primary features of the website is its post page, where I publishes the latest activities and projects I completed. The page is updated frequently, allowing visitors to stay up-to-date on Vince's latest accomplishments and interests. This page is particularly useful for anyone interested in programming or technology who is looking for inspiration or ideas for their own projects.</p>

	  <p class="paragraph" style="padding: 10px; color: white">Another notable feature of vince.fun is the gallery page, where Vince showcases her hobby in girlmoding. The page includes various high-quality photos of Vince (Elsa on this context), showcasing her creativity and eye for detail. Visitors to the website can explore the gallery and appreciate Vince's passion for girlmoding. The home page of vince.fun provides an overview of Vince's background and interests, helping visitors to get to know him better. The page describes Vince's programming skills and other interests, including photography and travel. This section of the website is particularly useful for anyone interested in collaborating with Vince or learning more about his work.</p>

	  <p class="paragraph" style="padding: 10px; color: white">Overall, vince.fun is an excellent website that showcases the various activities and interests of Vince, a passionate individual in programming and technology. The website provides an excellent platform for Vince to showcase his skills and share his knowledge with others, while also acting as a testing ground for new ideas and projects. Anyone interested in programming, technology, or photography will find vince.fun to be a valuable resource and source of inspiration.</p>

<div class="spacer_20px"></div>

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