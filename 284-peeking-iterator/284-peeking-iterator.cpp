class PeekingIterator : public Iterator {
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {}
	
	int peek() {
        return Iterator(*this).next(); //We called the copy constructor 
        //                             then performed the next function on it
	}
	int next() {
	    return Iterator::next();
	}
	bool hasNext() const {
	    return Iterator::hasNext();
	}
};