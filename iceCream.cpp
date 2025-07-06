#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct FlavorState
{
    int frequency = 0;
    int last_used_time = 0;
    int shelf = 0;
};


int cap_l1, cap_l2, cap_l3;
list<string> l1, l2, l3;
unordered_map<string, FlavorState> flavor_db;


void insert_into_shelf(int level, const string &name);


string find_and_remove_victim(list<string> &shelf)
{
    string victim_name;
    int min_freq = 1e9 + 7;
    int min_time = 1e9 + 7;

    for (const auto &flavor_name : shelf)
    {
        const auto &state = flavor_db[flavor_name];
        if (state.frequency < min_freq)
        {
            min_freq = state.frequency;
            min_time = state.last_used_time;
            victim_name = flavor_name;
        }
        else if (state.frequency == min_freq)
        {
            if (state.last_used_time < min_time)
            {
                min_time = state.last_used_time;
                victim_name = flavor_name;
            }
        }
    }
    shelf.remove(victim_name);
    return victim_name;
}


void insert_into_shelf(int level, const string &name)
{
    flavor_db[name].shelf = level;

    if (level == 1)
    {
        if (l1.size() >= cap_l1)
        {
            string victim = find_and_remove_victim(l1);
            insert_into_shelf(2, victim);
        }
        l1.push_back(name);
    }
    else if (level == 2)
    {
        if (l2.size() >= cap_l2)
        {
            string victim = find_and_remove_victim(l2);
            insert_into_shelf(3, victim);
        }
        l2.push_back(name);
    }
    else if (level == 3)
    {
        if (l3.size() >= cap_l3)
        {
            string victim = find_and_remove_victim(l3);
            flavor_db[victim].shelf = 0; // Discarded to storage
        }
        l3.push_back(name);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> cap_l1 >> cap_l2 >> cap_l3;

    int n;
    cin >> n;

    long long total_time = 0;
    for (int t = 1; t <= n; ++t)
    {
        string flavor_name;
        cin >> flavor_name;

        // Update flavor stats
        flavor_db[flavor_name].frequency++;
        flavor_db[flavor_name].last_used_time = t;

        int current_shelf = flavor_db[flavor_name].shelf;

        // --- Process Request ---
        if (current_shelf == 1)
        {
            total_time += 1;
        }
        else if (current_shelf == 2)
        {
            total_time += 3;
            l2.remove(flavor_name);
            insert_into_shelf(1, flavor_name);
        }
        else if (current_shelf == 3)
        {
            total_time += 10;
            l3.remove(flavor_name);
            insert_into_shelf(1, flavor_name);
        }
        else
        { // Miss from storage
            total_time += 10;
            insert_into_shelf(1, flavor_name);
        }
    }

    cout << total_time << endl;

    return 0;
}