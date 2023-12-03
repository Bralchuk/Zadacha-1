#include <iostream>
#include <algorithm>

int main() {
    const int totalPeople = 10;
    const int tripsPerPerson = 2;
    const int oneTripTicketCost = 8;
    const int unlimitedTicketCost = 650;
    const int groupUnlimitedTicketCost = 1000;
    const int groupSize = 5;

    // Calculate the minimum total cost of tickets
    int individualCost = totalPeople * tripsPerPerson * oneTripTicketCost; // Cost of individual tickets

    int groupCount = totalPeople / groupSize; // Number of groups
    int remainingPeople = totalPeople % groupSize; // Remaining people without a group

    int groupCost = groupCount * groupUnlimitedTicketCost; // Cost of group tickets

    // If there are remaining people without a group, add the cost of individual tickets for them
    if (remainingPeople > 0) {
        individualCost += remainingPeople * tripsPerPerson * oneTripTicketCost;
    }

    // Find the minimum among individual, group, and unlimited tickets
    int minCost = std::min(individualCost, groupCost);

    // Find the minimum among minCost and unlimited tickets
    minCost = std::min(minCost, totalPeople * tripsPerPerson * unlimitedTicketCost);

    // Output the result
    std::cout << "Minimum total cost of tickets: " << minCost << " hryvnias\n";

    return 0;
}




