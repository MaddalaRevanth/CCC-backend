class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> taskCount; //Counts the tasks
        for(char task : tasks)
        {
            taskCount[task]++;
        }

        priority_queue<int> maxHeap;
        for(auto& entry:taskCount)
        {
            maxHeap.push(entry.second);
        }
        int time = 0;
        queue<pair<int,int>> cooldown; //Cooldown q

        while(!maxHeap.empty() || !cooldown.empty())
        {
            time++;
            if(!maxHeap.empty())
            {
                int currentTask = maxHeap.top();
                maxHeap.pop();

                if(currentTask - 1 > 0 ) cooldown.push({currentTask - 1 , time + n}); //Time tasks arrives again
                
            }

             if (!cooldown.empty() && cooldown.front().second == time) {
                maxHeap.push(cooldown.front().first);
                cooldown.pop();
            }
        }
        return time;
    }
};
