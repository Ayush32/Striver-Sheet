int highestGrow = 0, currTime = 0;
        vector<pair<int,int>> time;

        for(int i=0; i<plantTime.size(); i++)
        {
            time.push_back({growTime[i], plantTime[i]});
        }

        sort(time.begin(), time.end());

        for(int i=plantTime.size()-1; i>=0; i--)
        {
            currTime += time[i].second;
            highestGrow = max(highestGrow, currTime + time[i].first);
        }

        return highestGrow;
}
