# C++ Class Project Gratuity Calculator

This programming challenge as outline in class.

## Project specifications:

Design a Tips class that calculates the gratuity on a restaurant meal.  Its only class member variable, taxRate, should be set by a one-parameter constructor to whatever rate is passed to it when a Tips object is created.  If no argument is passed, a default tax rate of .065 should be used.   

The class should have just one public function, computeTips.   This function needs to accept two arguments, the total bill amount and the tip rate.  It should use this information to compute what the cost of the meal was before the tax was added.  It should then apply the tip rate to just the meal cost portion of the bill to compute and return the tip amount.  

Demonstrate the class by creating a program with a single Tips object, then loops multiple times to allow the program user to retrieve the correct tip amount using various bill totals and desired tip rates.
