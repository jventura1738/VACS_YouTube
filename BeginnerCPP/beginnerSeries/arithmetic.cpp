// Justin Ventura [12/27/20]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

int main() {

    // Suppose we run a very simple and illegal lemonade stand:
    //
    // It costed $100 to start the stand, then we buy 150 lemons and
    // 150 cups costing us $0.20 and $0.15 respectively.  Assume we
    // sell all 150 cups of lemonade created at a price of $1.30 per
    // cup.  Then assume we get roughly $10.55 total in tips.  What
    // is our total profit before the government finds our stand and
    // forces us to pay taxes on it?  Then if we continue to run and
    // sell 200 more lemonades with a 25% tax on revenue, and assume
    // we get roughly $22.50 in tips, what is our new net profit 
    // (including the profit from the initial 150)?
    float startupCost = 100.0;
    float costPerLemon = 0.20, costPerCup = 0.15;
    float pricePerLemonade = 1.30, tips = 10.55;
    int numberOfSales = 150;

    float revenue = pricePerLemonade * numberOfSales + tips;
    float costs = startupCost;
    costs += numberOfSales * (costPerCup + costPerLemon);
    float profit1 = revenue - costs;

    cout << "Our total profit: " << profit1 << "\n";

    // Now for the second part of the question...
    numberOfSales = 200;
    tips = 22.5;
    float taxRate = 0.25;

    revenue = pricePerLemonade * numberOfSales;
    costs = numberOfSales * (costPerCup + costPerLemon);
    revenue = (revenue - costs);
    float profit2 = revenue - (revenue * taxRate) + tips + profit1;

    cout << "Our new overall profit: " << profit2 << "\n";
    return 0;
}