
//Functions to use : isInteger() , getInteger() , getList()
class NestedIterator {
public:
    vector<int>vec;
    void iterate(NestedInteger n){
            if(n.isInteger())vec.push_back(n.getInteger());
            else {
                for(auto sth:n.getList())
                iterate(sth);
            }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto element:nestedList){
            iterate(element);
        }
    }
    int j=0;
    int next() {
        return vec[j++];
    }
    
    bool hasNext() {
        return j<vec.size();
    }
};

