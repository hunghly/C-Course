#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool siblings(struct Family member1, struct Family member2)
{
    if (strcmp(member1.mother, member2.mother) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool siblingsPtr(struct Family *member1, struct Family *member2)
{
    if (strcmp(member1->mother, member2->mother) == 0)
    { // make sure to use arrow operator to access field
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    struct Family joe = {"joe smith", 23, "rob smith", "jane smith"};
    struct Family jake = {"jake smith", 23, "rob smith", "jane smith"};

    if (siblingsPtr(&joe, &jake))
    {
        printf("%s and %s are siblings with a mom of %s\n", joe.name, jake.name, joe.mother);
    }
    else
    {
        printf("No sibling found");
    }
}