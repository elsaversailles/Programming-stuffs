<!DOCTYPE html>
<html lang="en"> 
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Activity</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.3.1/dist/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/marked/marked.min.js"></script>      
	<link rel="stylesheet" type="text/css" href="/style.css">
</head>

<body>
<?php include('header.php'); ?>

<div class="html-section">
<h2 id="paragraph1">There are two ways of rendering Tables and Lists on Browser</h2>
<div class="spacer_10px"></div>
<hr style="height: 2px; border-top: 2px solid #ffffff1f; padding-left: 10px; padding-right: 10px;">
<p id="paragraph1">1. Using native HTML</p>
<div class="spacer_10px"></div>
<p id="paragraph1">HTML supports inserting tables and list natively. This is a standard method of organizing data</p>
<div class="spacer_10px"></div>
    <div class="html-table">
        <table class="table table-striped table-bordered html-table">
            <thead>
                <tr>
                    <th>First Name</th>
                    <th>Last Name</th>
                    <th>Age</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>Elsa</td>
                    <td>Versailles</td>
                    <td>25</td>
                </tr>
                <tr>
                    <td>Taktus</td>
                    <td>Cat</td>
                    <td>37</td>
                </tr>
                <tr>
                    <td>July</td>
                    <td>Dooley</td>
                    <td>43</td>
                </tr>
            </tbody>
        </table>
</div>

<div class="html-list">
    <p id="paragraph1">Stuffs I want</p>
    <ul>
        <li>Food</li>
        <li>Dresses</li>
        <li>Computers</li>
    </ul>
    <ol>
        <li>Mouse</li>
        <li>Keyboard</li>
        <li>Makeup</li>
    </ol>
</div>

<p id="paragraph1">2. Using Markdown</p>
<div class="spacer_10px"></div>
<p id="paragraph1">Markdown is a lightweight markup language that allows you to write text in a plain text format useful on software and README texts. This is achieved through MarkedJS</p>
<div class="markdown-container">
    <div id="table"></div>
    <script src="https://cdn.jsdelivr.net/npm/marked/marked.min.js"></script>
    <script>
      document.getElementById('table').innerHTML =
        marked.parse('| First Name &#9;| Last Name &#9;| Age &#9;|\n'
                       + '|------------|-----------|-----|\n'
                       + '| Elsa       | Versailles| 25  |\n'
                       + '| Taktus     | Cat       | 37  |\n'
                       + '| July       | Dooley    | 43  |');
    </script> 
    <p id="paragraph1">Stuffs I want</p>
    <div id="list"></div>
    <script src="https://cdn.jsdelivr.net/npm/marked/marked.min.js"></script>
    <script>
      document.getElementById('list').innerHTML =
        marked.parse(' - Food\n- Dresses\n- Computer\n');
    </script> 
        <div id="list1"></div>
        <script src="https://cdn.jsdelivr.net/npm/marked/marked.min.js"></script>
        <script>
          document.getElementById('list1').innerHTML =
          marked.parse('1. [ ] Mouse\n 2. [x] Keyboard \n 3. [x] Makeup');
        </script> 
</div>

<div class="spacer_20px"></div>


<button onclick="toggleDiv()" type="button" class="btn btn-primary codeButton">View Source</button>
<div id="snippet" style="display:none">
    <script src="https://gist.github.com/elsaversailles/8c092401286561a83b07124fc156c44f.js"></script>
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