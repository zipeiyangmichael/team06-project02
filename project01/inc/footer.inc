<footer class= "page-footer indigo lighten-2">
	<div class = "container">
		<div class = "row">
				<h5 class = "white-text">About us:</h5>
				<p class = "flow-text">Team 6, CSC 174 Advanced Front-End Web Development</p>

							<h5 class="white-text">Content Sources</h5>
						<p class="flow-text">Code content was taken from the Materialize site</p>
		</div>
	</div>

	<div class ="footer-copyright">
		<div class ="container hide-on-small-only">
			Content taken from    <a href="<?php echo $contentFrom ?>" class="waves-light btn cyan"><?php echo "$sportName" ?>Wikipedia</a>
		</div>
		
<!--for mobile usability-->
		<div class="hide-on-med-and-up">
			Content taken from <a href="<?php echo $contentFrom ?>"><?php echo "$sportName" ?>Wikipedia</a>
		</div>
	</div>			
</footer>