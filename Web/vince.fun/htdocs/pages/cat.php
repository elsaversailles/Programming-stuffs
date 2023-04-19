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
    <h2 id="paragraph">Cats</h2>
    <div class="row justify-content-center">
 
    <img src="https://upload.wikimedia.org/wikipedia/commons/a/ae/Cats_Fauvism_Illustration_by_David_S._Soriano.png" style="width: 200px; height: auto; border-radius: 3px; border: 2px solid white; padding: 5px;" alt="Cats" class="img-fluid">
    </div>


	<p class="paragraph" style="padding: 10px; color: white">Cats are one of the most popular pets in the world, with millions of people keeping them as companions. They are known for their graceful movements, soft fur, and independent personalities. Despite being domesticated animals, they still retain some of their wild instincts, which make them fascinating creatures to observe and interact with.</p>

	<p class="paragraph" style="padding: 10px; color: white">Cats belong to the Felidae family and are known for their sharp claws, retractable claws, and excellent hunting skills. They come in different breeds, sizes, and colors, from the fluffy and cuddly Persian cat to the sleek and athletic Siamese cat. One of the defining features of cats is their ability to groom themselves, which they do by licking their fur. This grooming behavior not only keeps their coat clean but also helps them regulate their body temperature.</p>

	<p class="paragraph" style="padding: 10px; color: white">Cats are also known for their hunting instincts, which they use to catch prey such as rodents, birds, and insects. This instinct is still evident in domesticated cats, who may bring their owners dead or half-dead animals as a gift. While some people may find this behavior unpleasant, it is important to understand that it is a natural behavior for cats, and they are not doing it out of malice.
    One of the reasons why cats are such popular pets is their independent nature. Unlike dogs, they do not require constant attention and can entertain themselves for hours on end. This makes them ideal pets for busy people who may not have the time or energy to give a pet constant attention. Cats are also very clean animals and are easy to litter train, making them low-maintenance pets.</p>

    <p class="paragraph" style="padding: 10px; color: white">Another reason why cats are popular pets is their affectionate nature. While they may not be as overtly affectionate as dogs, they still enjoy human company and will often seek out their owner's attention. They also have a unique way of showing affection, such as rubbing against their owner's leg or kneading their paws on a soft surface.
    Cats have also been found to have several health benefits for their owners. Studies have shown that owning a cat can reduce stress and anxiety, lower blood pressure, and even decrease the risk of heart attacks and strokes. This is thought to be because of the calming effect that cats have on their owners, as well as their ability to provide companionship.</p>

    <p class="paragraph" style="padding: 10px; color: white">In conclusion, cats are fascinating creatures that have captured the hearts of millions of people worldwide. They have unique personalities, excellent hunting skills, and are easy to care for, making them ideal pets for many households. Whether you are looking for a cuddly companion or an independent pet, a cat may be the perfect addition to your home.</p>

<div class="spacer_20px"></div>

<button onclick="toggleDiv()" type="button" class="btn btn-primary codeButton">View Source</button>
<div id="snippet" style="display:none">
    <script src="https://gist.github.com/elsaversailles/0e9e26ab3c707629635b0239df9378d0.js"></script>
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