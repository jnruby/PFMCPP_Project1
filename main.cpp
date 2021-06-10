#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
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
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       person
//  action 1:   person eats food
person.eat();
//  action 2:   person takes shower
person.takeShower();
//  action 3:   person takes a nap
person.nap();
//  2)
//  Noun:       Volvo
//  action 1:   volvo engine overheat
volvo.overheatEngine();
//  action 2:   wheels fall off
volvo.wheelsRelease();
//  action 3:   rust accumulates
volvo.accumulateRust;
//  3)
//  Noun:   cucumber
//  action 1:   the cucumber is peeled
cucumber.peel();
//  action 2:   the cucumber is sliced
cucumber.slice();
//  action 3:   the cucumber is pickled
cucumber.pickle();
//  4)
//  Noun:   mixer knob
//  action 1:   turn the knob right
knob.rotateRight();
//  action 2:   turn the knob left
knob.rotateLeft();
//  action 3:   pull knob out
knob.remove();
//  5)
//  Noun:   guitar
//  action 1:   detune
guitar.detuneStrings();
//  action 2:   use slide
guitar.useSlide();
//  action 3:   change tuning system
guitar.changeTuning();
//  6)
//  Noun:   stick
//  action 1:   is thrown
stick.thrown();
//  action 2:   burns
stick.burn();
//  action 3:   is split
stick.split();
//  7)
//  Noun:   dough
//  action 1:   knead the dough
dough.knead();
//  action 2:   rise the dough
dough.rise();
//  action 3:   roll the dough
dough.roll();
//  8)
//  Noun:   metronome
//  action 1:   increase tempo
metronome.faster();
//  action 2:   decrease volume
metronome.softer();
//  action 3:   syncronize with another metronome
metronome.sync();
//  9)
//  Noun:       humanFinger
//  action 1:   finger points rights
humanFinger.pointRight();
//  action 2:   cut nail
humanFinger.cutNail();
//  action 3:   press button
humanFinger.pressButton();
//  10)
//  Noun:       boat
//  action 1:   gets painted
boat.paint();
//  action 2:   check for barnacles
boat.inspectBarnacles;
//  action 3:   boat sinks
boat.sink();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
