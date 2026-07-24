class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        task_freq=collections.Counter(tasks)
        min_rounds=0
        for task,count in task_freq.items():
            if count==1:
                return -1
            
            if count%3==0:
                min_rounds+=count//3
            else:
                min_rounds+=(count//3)+1
        return min_rounds