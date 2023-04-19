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

    <h2 id="paragraph">Markdown</h2>
    <div class="row justify-content-center">
 
    <img src="/resources/Pics/tableLogo.png" style="width: 200px; height: auto; border-radius: 3px; border: 2px solid white; padding: 5px;" alt="Cats" class="img-fluid">
    </div>


	<p class="paragraph" style="padding: 10px; color: white"> Markdown is a lightweight markup language that is commonly used to format plain text into structured documents, including web pages, emails, and digital notes. It was created by John Gruber in 2004 as a way to write in an easy-to-read and easy-to-write format that could be converted into HTML.
    Markdown uses simple syntax to indicate how text should be formatted. For example, putting asterisks around a word or phrase will make it bold, while enclosing it in underscores will make it italicized. A hashtag symbol before a line of text will create a heading, and dashes before a line of text will create a bulleted list.</p>

	<p class="paragraph" style="padding: 10px; color: white">One of the advantages of using Markdown is its simplicity. It is a plain text format that can be created and edited in any text editor, including basic tools like Notepad or TextEdit. This makes it easy to use on any device, without the need for specialized software or plugins. Additionally, the syntax is intuitive and easy to learn, allowing users to create formatted documents quickly and efficiently.
    Another advantage of Markdown is its portability. Since Markdown documents are plain text, they can be easily converted into other formats, such as HTML, PDF, or even Microsoft Word documents. This makes it easy to share and collaborate on documents across different platforms and devices.</p>

	<p class="paragraph" style="padding: 10px; color: white">Markdown is also very flexible. It supports a wide range of formatting options, including headings, lists, links, images, tables, and code blocks. This makes it useful for a variety of applications, from writing blog posts and academic papers to creating technical documentation and software development notes.
    In addition, Markdown is widely supported by many applications and platforms. Many popular websites and platforms, such as GitHub, Reddit, and Stack Overflow, allow users to write in Markdown. This makes it easy to share formatted content online, without the need for specialized software or plugins.</p>

    <p class="paragraph" style="padding: 10px; color: white">In conclusion, Markdown is a simple, flexible, and portable markup language that has become popular for creating structured documents. It offers an intuitive syntax and can be used on any device or platform, making it easy to use and share. Whether you are a writer, developer, or blogger, Markdown is a useful tool for creating formatted content quickly and efficiently.</p>

<div class="spacer_20px"></div>

<button onclick="toggleDiv()" type="button" class="btn btn-primary codeButton">View Source</button>
<div id="snippet" style="display:none">
    <script src="https://gist.github.com/elsaversailles/70b84c27482b895952075ed0816d18dc.js"></script>
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