int maxScoreSightseeingPair(int* values, int valuesSize) {
    int MaxpreLoadI=values[0]+0,max=0;
    for(int j=1;j<valuesSize;j++)
    {
        if(max<MaxpreLoadI+values[j]-j)
        { 
            max=MaxpreLoadI+values[j]-j;
        }
        if(MaxpreLoadI<values[j]+j)
        {
            MaxpreLoadI=values[j]+j;
        }
        
    }
    return max;
    
}
