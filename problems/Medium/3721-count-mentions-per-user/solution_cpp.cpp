class Solution {
public:
    // Helper function to extract user IDs from the mentions string
    vector<int> extract(string a, int numberOfUsers) {
        vector<int> ans;
        if (a == "ALL") {
            // Mention all users
            for (int i = 0; i < numberOfUsers; i++) {
                ans.push_back(i);
            }
            return ans;
        }
        
        string idStr = "";
        for (char ch : a + " ") { // Add a space to handle the last ID
            if (ch == ' ') {
                if (!idStr.empty() && idStr.substr(0, 2) == "id") {
                    int id = stoi(idStr.substr(2)); // Extract the numeric part
                    ans.push_back(id);
                }
                idStr = "";
            } else {
                idStr += ch;
            }
        }
        return ans;
    }

    // Main function to count mentions
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
       sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
        int timestampA = stoi(a[1]);
        int timestampB = stoi(b[1]);
        if (timestampA == timestampB) {
            // If timestamps are equal, give preference to "OFFLINE"
            return a[0] > b[0];
        }
        return timestampA < timestampB; // Otherwise, sort by timestamp
    });

        vector<int> mentions(numberOfUsers, 0);
        vector<pair<int, int>> offlineStatus; // {userID, timestamp when they come online}

        for (const auto& event : events) {
            cout << event[0] << "&&";
            string type = event[0];
            int timestamp = stoi(event[1]);

            if (type == "OFFLINE") {
                int userId = stoi(event[2]);
                offlineStatus.push_back({userId, timestamp + 60});
            } else if (type == "MESSAGE") {
                string mentionsStr = event[2];
                vector<int> ids;

                if (mentionsStr == "HERE") {
                    for (int userId = 0; userId < numberOfUsers; userId++) {
                        // Check if the user is online at the current timestamp
                        bool isOffline = false;
                        for (const auto& offline : offlineStatus) {
                            if (offline.first == userId && offline.second > timestamp) {
                                isOffline = true;
                                break;
                            }
                        }
                        if (!isOffline) {
                            ids.push_back(userId);
                        }
                    }
                } else {
                    ids = extract(mentionsStr, numberOfUsers);
                }

                // Update mentions count for all extracted IDs
                for (int id : ids) {
                    mentions[id]++;
                }
            }
        }

        return mentions;
    }
};
