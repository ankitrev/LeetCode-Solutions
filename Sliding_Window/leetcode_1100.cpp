// Solution for leetcode problem no. 1100 Find K-Length Substrings With No Repeated Characters

public int find_distinct(string str, int k){
	int arr[256] = {0};
	int n = str.size();
	int start = 0, end = 0, distinct = 0, res = 0;
	while(end < n){
		if(arr[str[end] - 'a'] == 0)
			distinct++;
		arr[str[end] - 'a']++;
		end++;
		if(distinct == k){
			res++;
			if(arr[str[start] - 'a'] == 1)
				distinct--;
			start++;
		}
	}

	return res;
}
