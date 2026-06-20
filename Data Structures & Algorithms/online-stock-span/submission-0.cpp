class StockSpanner {
public:
    stack<pair<int,int>> s; // {index, price}
    int idx;

    StockSpanner() {
        idx = 0;
    }

    int next(int price) {

        while(!s.empty() && s.top().second <= price)
            s.pop();

        int span;

        if(s.empty())
            span = idx + 1;
        else
            span = idx - s.top().first;

        s.push({idx, price});
        idx++;

        return span;
    }
};