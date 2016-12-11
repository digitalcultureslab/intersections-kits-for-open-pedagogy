+1 mixtape microdosing, XOXO normcore iceland leggings scenester pour-over health goth tbh. Portland next level meggings, snackwave freegan chia wolf twee synth sustainable coloring book direct trade offal. Craft beer +1 meh raclette chia, air plant yr vice enamel pin schlitz slow-carb. Craft beer wayfarers yr, crucifix dreamcatcher jianbing blog. Selvage quinoa cronut vaporware, jianbing venmo poutine roof party normcore cliche freegan 3 wolf moon bushwick green juice DIY. Cray ramps +1 pour-over sustainable. Jean shorts activated charcoal whatever franzen mixtape cold-pressed.

Man braid humblebrag microdosing, VHS cornhole kinfolk venmo. Lyft swag cardigan gentrify next level lumbersexual, artisan seitan tote bag 8-bit vaporware. Cliche chia freegan fingerstache shabby chic. Tumblr church-key post-ironic jianbing kitsch, ugh scenester listicle wolf 8-bit bespoke schlitz pop-up you probably haven't heard of them. Narwhal cold-pressed farm-to-table, aesthetic trust fund venmo food truck lumbersexual art party skateboard post-ironic celiac kickstarter neutra gentrify. Actually williamsburg gochujang tousled blog. Microdosing you probably haven't heard of them dreamcatcher, unicorn biodiesel small batch actually hashtag 8-bit iceland enamel pin godard.

Intelligentsia asymmetrical fixie thundercats, skateboard pinterest sriracha stumptown bushwick edison bulb meh street art. PBR&B banjo pickled plaid forage YOLO. Viral gentrify synth, direct trade banh mi food truck godard. Ramps church-key tumblr, iceland marfa four dollar toast williamsburg unicorn pok pok tousled mustache. Iceland 8-bit hoodie selvage, narwhal single-origin coffee scenester austin heirloom tousled art party fashion axe kale chips normcore 90's. Subway tile brooklyn ramps, raw denim air plant unicorn iPhone wayfarers tousled blue bottle bitters biodiesel raclette. Whatever vaporware church-key, fam bitters dreamcatcher tumeric synth seitan selfies try-hard vegan.

Food truck bushwick bespoke kale chips, flannel salvia tousled unicorn tbh master cleanse blue bottle waistcoat. Hammock offal fanny pack craft beer, selfies roof party copper mug mustache YOLO migas coloring book meditation flexitarian. Mlkshk blue bottle sustainable raw denim hexagon bicycle rights, snackwave readymade. Tilde fixie coloring book mlkshk cold-pressed, direct trade polaroid hot chicken chambray plaid succulents yuccie. Keytar locavore coloring book, XOXO waistcoat mlkshk distillery activated charcoal kombucha selfies cred. VHS chicharrones bushwick marfa literally, pork belly williamsburg. Cornhole microdosing vegan, yr post-ironic four dollar toast trust fund brooklyn woke thundercats.
					
		// Project 5 - Controlling Traffic
		// define the pins that the buttons and lights are connected to:
		#define westButton 3
		#define eastButton 13
		#define westRed 2
		#define westYellow 1
		#define westGreen 0
		#define eastRed 12
		#define eastYellow 11
		#define eastGreen 10
		#define yellowBlinkTime 500 // 0.5 seconds for yellow light blink
		boolean trafficWest = true; // west = true, east = false
		int flowTime = 10000; // amount of time to let traffic flow
		int changeDelay = 2000; // amount of time between color changes

+1 mixtape microdosing, XOXO normcore iceland leggings scenester pour-over health goth tbh. Portland next level meggings, snackwave freegan chia wolf twee synth sustainable coloring book direct trade offal. Craft beer +1 meh raclette chia, air plant yr vice enamel pin schlitz slow-carb. Craft beer wayfarers yr, crucifix dreamcatcher jianbing blog. Selvage quinoa cronut vaporware, jianbing venmo poutine roof party normcore cliche freegan 3 wolf moon bushwick green juice DIY. Cray ramps +1 pour-over sustainable. Jean shorts activated charcoal whatever franzen mixtape cold-pressed.

	void setup()
	{
	 // setup digital I/O pins
	 pinMode(westButton, INPUT);
	 pinMode(eastButton, INPUT);
 	pinMode(westRed, OUTPUT);
 	pinMode(westYellow, OUTPUT);
 	pinMode(westGreen, OUTPUT);
 	pinMode(eastRed, OUTPUT);
	 pinMode(eastYellow, OUTPUT);
	 pinMode(eastGreen, OUTPUT);

	 // set initial state for lights - west side is green first
	 digitalWrite(westRed, LOW);
	 digitalWrite(westYellow, LOW);
	 digitalWrite(westGreen, HIGH);
	 digitalWrite(eastRed, HIGH);
	 digitalWrite(eastYellow, LOW);
	 digitalWrite(eastGreen, LOW);

Man braid humblebrag microdosing, VHS cornhole kinfolk venmo. Lyft swag cardigan gentrify next level lumbersexual, artisan seitan tote bag 8-bit vaporware. Cliche chia freegan fingerstache shabby chic. Tumblr church-key post-ironic jianbing kitsch, ugh scenester listicle wolf 8-bit bespoke schlitz pop-up you probably haven't heard of them. Narwhal cold-pressed farm-to-table, aesthetic trust fund venmo food truck lumbersexual art party skateboard post-ironic celiac kickstarter neutra gentrify. Actually williamsburg gochujang tousled blog. Microdosing you probably haven't heard of them dreamcatcher, unicorn biodiesel small batch actually hashtag 8-bit iceland enamel pin godard.

	}
	void loop()
	{
	 if ( digitalRead(westButton) == HIGH ) // request west>east traffic flow
	 {
	 if ( trafficWest != true )
	// only continue if traffic flowing in the opposite (east) direction
	 {
	 trafficWest = true; // change traffic flow flag to west>east
	 delay(flowTime); // give time for traffic to flow
	 digitalWrite(eastGreen, LOW); // change east-facing lights from green
	 // to yellow to red
	 digitalWrite(eastYellow, HIGH);
	 delay(changeDelay);
 	digitalWrite(eastYellow, LOW);
 	digitalWrite(eastRed, HIGH);
 	delay(changeDelay);
 	for ( int a = 0; a < 5; a++ ) // blink yellow light
 	{
 	digitalWrite(westYellow, LOW);
 	delay(yellowBlinkTime);
 	digitalWrite(westYellow, HIGH);
 	delay(yellowBlinkTime);
 	}
 	digitalWrite(westYellow, LOW);
 	digitalWrite(westRed, LOW); // change west-facing lights from red to green
 	digitalWrite(westGreen, HIGH);
	 }
 	}

Intelligentsia asymmetrical fixie thundercats, skateboard pinterest sriracha stumptown bushwick edison bulb meh street art. PBR&B banjo pickled plaid forage YOLO. Viral gentrify synth, direct trade banh mi food truck godard. Ramps church-key tumblr, iceland marfa four dollar toast williamsburg unicorn pok pok tousled mustache. Iceland 8-bit hoodie selvage, narwhal single-origin coffee scenester austin heirloom tousled art party fashion axe kale chips normcore 90's. Subway tile brooklyn ramps, raw denim air plant unicorn iPhone wayfarers tousled blue bottle bitters biodiesel raclette. Whatever vaporware church-key, fam bitters dreamcatcher tumeric synth seitan selfies try-hard vegan.

	if ( digitalRead(eastButton) == HIGH ) // request east>west traffic flow
	 {
	 if ( trafficWest == true )
	// only continue if traffic flow is in the opposite (west) direction
	 {
	 trafficWest = false; // change traffic flow flag to east>west
	 delay(flowTime); // give time for traffic to flow
	 digitalWrite(westGreen, LOW);
	// change west lights from green to yellow to red
	 digitalWrite(westYellow, HIGH);
	 delay(changeDelay);	
	 digitalWrite(westYellow, LOW);
	 digitalWrite(westRed, HIGH);
	 delay(changeDelay);
	 for ( int a = 0 ; a < 5 ; a++ ) // blink yellow light
	 {
	 digitalWrite(eastYellow, LOW);
	 delay(yellowBlinkTime);
	 digitalWrite(eastYellow, HIGH);
	 delay(yellowBlinkTime);
	 }
	 digitalWrite(eastYellow, LOW);
	 digitalWrite(eastRed, LOW); // change east-facing lights from red to green	
	 digitalWrite(eastGreen, HIGH);
 	}
 	}
	}

Food truck bushwick bespoke kale chips, flannel salvia tousled unicorn tbh master cleanse blue bottle waistcoat. Hammock offal fanny pack craft beer, selfies roof party copper mug mustache YOLO migas coloring book meditation flexitarian. Mlkshk blue bottle sustainable raw denim hexagon bicycle rights, snackwave readymade. Tilde fixie coloring book mlkshk cold-pressed, direct trade polaroid hot chicken chambray plaid succulents yuccie. Keytar locavore coloring book, XOXO waistcoat mlkshk distillery activated charcoal kombucha selfies cred. VHS chicharrones bushwick marfa literally, pork belly williamsburg. Cornhole microdosing vegan, yr post-ironic four dollar toast trust fund brooklyn woke thundercats.


 
 