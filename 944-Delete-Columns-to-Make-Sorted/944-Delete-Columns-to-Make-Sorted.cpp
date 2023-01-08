class Solution {
public:
    int minDeletionSize(vector<string>& str) {
        int delete_count = 0;
        int row = str.size();
        int col = str[0].size();

        for(int j = 0 ; j< col ; j++){
            for(int i =0 ; i< row-1; i++){

                if(str[i][j] > str[i+1][j]){

                    delete_count++;
                    break;
                }
            }
        }
        return delete_count;
    }
};
