    bool isBusy(int startTime, int endTime, int queryTime)
    {
        if(queryTime >= startTime && queryTime <= endTime)
                return true;
        return false;
    }
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) 
    {
        
        int countStudents =0;
        for(int i=0; i<startTime.size(); i++)
        {
            if(isBusy(startTime[i], endTime[i], queryTime))
                countStudents++;

        }
        return countStudents;
    }
