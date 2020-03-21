#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.


 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.
        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action

 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


// ================================================================================
// WingTangwong's entries  
// ================================================================================
//
// noun: fire
// action 1: provides light
fire.lightLocation(); // provides fire based light in location
// action 2: provides heat
fire.heatItem(); // provides heat to item
// action 3: ignite item
fire.igniteItem();
// action 4: consumes combustable items
fire.consumeItem();

// noun: water
// action 1: fills containers
water.fillContainer();
// action 2: wets surfaces 
water.wetItem(); // surface effect on item
// action 3: puts out fires
water.extinguishItem(); // checks if item has fire
// action 4: soaks porous items
water.soakItem(); // internal effect on item

// noun: air
// action 1: fills containers
air.fillContainer();
// action 2: fans burning items
air.fanItem(); // checks item for burning state
// action 3: conducts heat
air.conductHeat();
// action 4: conducts vibrations
air.conductVibrations();

// noun: earth
// action 1: smother fires
earth.smotherItem(); // "burning" can be a state of an item
// action 2: absorbs water, due to porous nature
earth.absorbItem(); // absorb an item if it has water attribute
// action 3: fills containers
earth.fillContainer();

// noun: hand
// action 1: grasps a physical object
hand.graspItem();
// action 2: pushes a button/lever/item
hand.pushItem();
// action 3: pulls a button/level/item
hand.pullItem();
// action 4: carries a physcal object 
hand.carryItem();

// noun: mouth
// action 1: vocalizes sounds
mouth.createSound();
// action 2: inhales air
mouth.inhaleItem(); // generalizes "air" as an item
// action 3: drinks in water
mouth.drinkItem();
// action 4: blows air on fire
mouth.exhaleItem(); 

// noun: foot
// action 1: stomps on earth
foot.stompItem(); // apply stomp action from foot to item
// action 2: kicks an object
foot.kickItem();
// action 3: pedal, if on a bike or machine
foot.pumpPedal();

// noun: rope
// action 1: engtangle an object
rope.entangleItem();
// action 2: pulls on object
rope.pullItem();
// action 3: connect two items
rope.connectItems();

// noun: hammer
// action 1: strike object
hammer.strikeItem();
// action 2: shape raw materials 
hammer.shapeItem();
// action 3: drive nail into wood
hammer.driveItemIntoItem();

// noun: spoon
// action 1: hold a small amount of something
spoon.fillWithItem();
// action 2: stir/mix something
spoon.mixItemsInContainer(); 
// action 3: scrape a semi-hard to soft material
spoon.scrapeItem();

#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
