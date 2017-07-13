int main(){
	while(n--){
		string str;
		cin>>str;
		for(int i = 0; i < str.size(). i++){
			if(str[i] == 'L'){
				right = mid;
				mid.F += left.F;
				mid.S += left.S;
			} else {
				left = mid;
				mid.F += right.F;
				mid.S += right.S;
			}
		}
		printf("%lld/%lld\n", mid.F, mid.S);
	}
	return 0;
}